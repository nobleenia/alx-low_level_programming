#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for any data type
 * @b: input to be allocated a memory
 *
 * Return: the pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
void *new_str = malloc(b);
if (new_str == NULL)
{
exit (98);
}
return (new_str);
}
