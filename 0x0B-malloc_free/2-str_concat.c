#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first input string for concatenation
 * @s2: teh second input string for concatenation
 *
 * Return: the new string
 */
char *str_concat(char *s1, char *s2)
{
int len1;
int len2;
int len_str;

char *new_str;

int i, j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);
len_str = len1 + len2 + 1;

new_str = malloc(len_str *sizeof(char));

if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{

new_str[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
new_str[i + j] = s2[j];
}

new_str[i + j] = '\0';

return (new_str);
}
