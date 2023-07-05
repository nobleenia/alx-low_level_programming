#include "main.h"

/**
 * _puts_recursion - prints the input string followed by a line
 * @s: the input string
 * Return: 0 success
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
