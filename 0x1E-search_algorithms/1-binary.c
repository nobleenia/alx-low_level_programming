#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return:  index where value is located OR
 * -1 If value not in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
size_t mid, start = 0, i = 0;
size_t end = size - 1;

if (array != NULL)
{
while (start < end)
{
mid = (start + end) / 2;
printf("Searching in array: ");
for (i = start; i <= end; i++)
{
printf("%d", array[i]);
if (i < end)
{
printf(", ");
}
}
if (array[mid] < value)
{
start = mid + 1;
}
else if (array[mid] > value)
{
end = mid - 1;
}
else
{
return (mid);
}
}
}
return (-1);
}
