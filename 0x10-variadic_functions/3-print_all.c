#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_c(va_list inputs);
void print_i(va_list inputs);
void print_f(va_list inputs);
void print_s(va_list inputs);

/**
 * print_all - prints all characters from the input
 * @format: the types of inputs
 */
void print_all(const char * const format, ...)
{

va_list inputs;
int n = 0;
char *sep = "";

va_start(inputs, format);

while (format && format[n])
{
switch (format[n])
{
case 'c':
print_c(inputs);
break;
case 'i':
print_i(inputs);
break;
case 'f':
print_f(inputs);
break;
case 's':
print_s(inputs);
break;
default:
break;
}

if (format[n + 1])
{
printf("%s", sep);
sep = ", ";
}

n++;
}

va_end(inputs);
printf("\n");
}

/**
 * print_c - prints a character
 * @inputs: variadic arguments list
 */
void print_c(va_list inputs)
{

printf("%c", va_arg(inputs, int));
}

/**
 * print_i - prints an integer
 * @inputs: variadic arguments list
 */
void print_i(va_list inputs)
{

printf("%d", va_arg(inputs, int));
}

/**
 * print_f - prints a float
 * @inputs: variadic arguments list
 */
void print_f(va_list inputs)
{

printf("%f", va_arg(inputs, double));
}

/**
 * print_s - prints a string
 * @inputs: variadic arguments list
 */
void print_s(va_list inputs)
{

char *str = va_arg(inputs, char *);

if (str == NULL)
{
str = "(nil)";
}
printf("%s", str);
}
