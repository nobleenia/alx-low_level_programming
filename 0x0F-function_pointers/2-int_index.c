#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the integer in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int n;

if (array == NULL || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}

for (n = 0; n < size; n++)
{
if (cmp(array[n]))
{
return (n);
}
}

if (n == size)
{
return (-1);
}

return (-1);
}
