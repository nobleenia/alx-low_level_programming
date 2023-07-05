#include "main.h"

/**
 * _strlen_recursion - counts the lenght of the string
 * @s: the string to be counted
 *
 * Return: len the lenght of the string
 */
int _strlen_recursion(char *s)
{
if (*s)
{
int len = 0;
len = len +(_strlen_recursion(s + 1));
}
return (len);
}
