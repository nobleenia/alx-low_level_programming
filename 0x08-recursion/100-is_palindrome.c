#include "main.h"

int pal_chck(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if string is palindrome
 * @s: string to be checked
 *
 * Return: 1 or 0, if palindrome or not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
else
{
return (pal_chck(s, 0, _strlen_recursion(s)));
}
}

/**
 * _strlen_recursion - counts the length of the string
 * @s: the string to be counted
 *
 * Return: len, the length of the string
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len = len + _strlen_recursion(s + 1);
len++;
}
return (len);
}

/**
 * pal_chck - checks for palindrome recursively
 * @s: string to be checked
 * @i: counter variable
 * @len: length of the string to check
 *
 * Return: 1 or 0, if palindrome or not
 */
int pal_chck(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
{
return (0);
}
else if (i >= len)
{
return (1);
}
else
{
return (pal_chck(s, i + 1, len - 1));
}
}
