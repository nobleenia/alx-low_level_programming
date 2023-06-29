#include "main.h"

/**
 * _strcat - adds the strings from *src to *dest
 * @dest: the first input for concatenation
 * @src: the second input for concatenation
 * Return: the concatenated word wit an empty string
 */
char *_strcat(char *dest, char *src)
{
int first_wrd, sec_wrd;

first_wrd = 0;
while (dest[first_wrd] != '\0')
{
first_wrd++;
}

sec_wrd = 0;
while (src[sec_wrd] != '\0')
{
dest[first_wrd] = src[sec_wrd];
first_wrd++;
sec_wrd++;
}
dest[first_wrd] = '\0';
return (dest);
}
