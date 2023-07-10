#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return pointer to the duplicate of input string
 * @str: the input string for duplication
 *
 * Return: the duplicate of input string or NULL if 0
 */
char *_strdup(char *str)
{
int l = strlen(str) + 1;
char *new_str =  malloc(l * sizeof(char));

if (str == 0)
{
return (NULL);
}

if (new_str == 0)
{
return (NULL);
}

strcpy(new_str, str);

return (new_str);
}
