#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_c(va_list inputs, char space);
void print_i(va_list inputs, char space);
void print_f(va_list inputs, char space);
void print_s(va_list inputs, char space);
/**
 * print_all - a function that prints all characters
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{

va_list inputs;
int n;
char space = ',';

va_start(inputs, format);

n = 0;
while (format && format[n])
{
switch (format[n])
{
case 'c':
print_c(inputs, space);
break;
case 'i':
print_i(inputs, space);
break;
case 'f':
print_f(inputs, space);
break;
case 's':
print_s(inputs, space);
break;
default:
space = '\0';
break;
}

n++;
}
va_end(inputs);
printf("\n");
}

/**
 * print_c - prints the characters in the va_list
 * @inputs: input list to be printed from
 * @space: space between elements
 *
 * Return: void
 */
void print_c(va_list inputs, char space)
{
printf("%c", va_arg(inputs, int));
if (space)
{
printf(", ");
}
}

/**
 * print_i - print the integers in the va_list
 * @inputs: input list to be printed from
 * @space: space between elements
 *
 * Return: void
 */
void print_i(va_list inputs, char space)
{
printf("%i", va_arg(inputs, int));
if (space)
{
printf(", ");
}
}

/**
 * print_f - prints the floats in the va_list
 * @inputs: input list to be printed from
 * @space: space between elements
 *
 * Return: void
 */
void print_f(va_list inputs, char space)
{
printf("%f", va_arg(inputs, double));
if (space)
{
printf(", ");
}
}

/**
 * print_s - prints the strings in the va_list
 * @inputs: input list to be printed from
 * @space: space between elements
 *
 * Return: void
 */
void print_s(va_list inputs, char space)
{

char *str = va_arg(inputs, char*);

if (str == NULL)
{
str = "(nil)";
}
printf("%s", str);

if (space)
{
printf(", ");
}
}
