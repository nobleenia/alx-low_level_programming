#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings to the value of n
 * @s1: the first string input
 * @s2: the second string input
 * @n: the length to be concatenated to for s2
 *
 * Return: NULL for failure, pointer to string for success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, len_str;
char *new_str;
unsigned int i, j;

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
len_str = len1 + ((len2 < n) ? len2 : n) + 1;

new_str = malloc(len_str * sizeof(char));
if (new_str == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
new_str[i] = s1[i];
}
for (j = 0; j < n && s2[j] != '\0'; j++)
{
new_str[i++] = s2[j];
}
new_str[i] = '\0';

return (new_str);
}
