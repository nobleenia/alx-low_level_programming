#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints all characters
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{

va_list inputs;
int n = 0;
char *str, space = ',';

va_start(inputs, format);

while (format && format[n])
{
switch (format[n])
{
case 'c':
printf("%c", va_arg(inputs, int));
break;
case 'i':
printf("%d", va_arg(inputs, int));
break;
case 'f':
printf("%f", va_arg(inputs, double));
break;
case 's':
str = va_arg(inputs, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s", str);
break;

default:
space = '\0';
break;
}

if (format[n + 1] && space)
{
printf("%c ", space);
}
n++;
}

va_end(inputs);
printf("\n");
}
