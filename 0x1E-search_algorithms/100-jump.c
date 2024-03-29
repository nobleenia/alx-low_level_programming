#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to first element of array to search
 * @size: the number of elements in array
 * @value: value to search for
 * Return: first index where value is located OR
 * -1 if value not present in array or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
size_t high = 0, low = 0, i;

if (array != NULL)
{
while (high < size)
{
low = high;
high = high + sqrt(size);
printf("Value checked array[%lu] = [%d]\n",
low, array[low]);
}
printf("Value found between indexes [%lu] and [%lu]\n",
low, high);
for (i = low; i < size && i <= high; i++)
{
printf("Value checked array[%lu] = [%d]\n",
i, array[i]);
}
if (i < size && array[i] == value)
{
printf("Found at index: %lu\n", i);
return i;
}
}
return (-1);
}
