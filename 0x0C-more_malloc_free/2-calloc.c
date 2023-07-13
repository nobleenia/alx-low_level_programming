#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of items in the array
 * @size: the size of the varible type
 *
 * Return: the array memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr_mem;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

arr_mem = malloc(nmemb * size);
if (arr_mem == NULL)
{
return (NULL);
}

memset(arr_mem, 0, nmemb * size);

return (arr_mem);
}
