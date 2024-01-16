#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: pointer to first element of array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located OR
 * -1 If value not present in array or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t pos;

if (array != NULL)
{
while ((array[high] != array[low]) &&
(value >= array[low]) &&
(value <= array[high]))
{
pos = low + (((double)(high - low) / (array[high] - array[low])) *
	     (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] < value)
{
low = pos + 1;
}
else if (array[pos] > value)
{
high = pos - 1;
}
else
return (pos);
}
if (array[low] == value)
{
return (low);
}
pos = low + (((double)(high - low) / (array[high] - array[low])) *
	     (value - array[low]));
printf("Value checked array[%lu] is out of range\n", pos);
}
return (-1);
}
