#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: the character to be counted
 * Return: the value to be returned
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
