#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: the string to be set to char
 * @to: the char to be set to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
*s = to;
}
