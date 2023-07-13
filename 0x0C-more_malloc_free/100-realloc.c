#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * realloc - reallocates the memory block 
 * @ptr: pointer to old memory
 * @old_size: size of space allocated for ptr
 * @new_size: size of new memory to be allocated
 *
 * Return: NULL for failure, ptr successful
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr ==NULL)
{
ptr = malloc(new_size);
}

if (new_size == old_size)
{
return (ptr);
}

free(ptr);

ptr = malloc(new_size);

return (ptr);
}
