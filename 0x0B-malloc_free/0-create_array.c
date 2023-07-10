#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array to be created
 * @c: the character to initialize array
 *
 * Return: the array created or 0 if size is 0
 */
char *create_array(unsigned int size, char c)
{

unsigned int n = 0;
char *arr = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}

if (arr == NULL)
{
return (NULL);
}

for (; n < size; n++)
{
arr[n] = c;
}
return (arr);
}
