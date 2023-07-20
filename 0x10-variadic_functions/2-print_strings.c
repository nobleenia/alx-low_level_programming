#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list inputs;
unsigned int i;
char *strings;

va_start(inputs, n);

for (i = 0; i < n; i++)
{
strings = va_arg(inputs, char *);

if (strings == NULL)
{
printf("(nil)");
}
else
{
printf("%s", strings);
}

if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(inputs);
printf("\n");
}
