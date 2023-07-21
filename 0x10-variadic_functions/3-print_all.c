#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
printf("%s%c", sep, va_arg(inputs, int));
break;
case 'i':
printf("%s%d", sep, va_arg(inputs, int));
break;
case 'f':
printf("%s%f", sep, va_arg(inputs, double));
break;
case 's':
{

char *str = va_arg(inputs, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
}
break;
default:
break;
}

sep = ", ";
n++;
}

va_end(inputs);
printf("\n");
}
