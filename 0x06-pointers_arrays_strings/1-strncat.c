#include "main.h"

/**
 * _strncat - a function that adds two strings to max n bytes
 * @dest: the first input for concatenation
 * @src: the second input for concatenation
 * @n: the maximum value of bytes for src
 * Return: dest a pointer to the string
 */
char *_strncat(char *dest, char *src, int n)
{
int first_word, sec_word;
int len_dest = 0;

first_word = 0;
while (dest[first_word] != '\0')
{
len_dest++;
first_word++;
}
sec_word = 0;
while ((src[sec_word] != '\0') && (sec_word < n))
{
dest[len_dest + sec_word] = src[sec_word];
first_word++;
sec_word++;
}
if (sec_word == n)
{
dest[first_word] = '\0';
}
else
{
dest[len_dest + sec_word] = '\0';
}
return (dest);
}
