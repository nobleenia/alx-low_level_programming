#include "search_algos.h"

int _binary_search(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located OR
 * -1 if value not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;
size_t min = 0;
int result;

if (array != NULL)
{
while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}
if (bound + 1 < size)
{
min = bound + 1;
}
else
{
min = size;
}
printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
result = _binary_search(array, bound / 2,  min, value);

if (result != -1)
{
return (result);
}
}
return (-1);
}

/**
 * _binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @left: first index of the [sub]array to search
 * @right: last index of the [sub]array to search
 * @value: value to search for
 * Return: index where the value is located OR
 * -1 if the value is not present or the array is NULL
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t i;

if (array == NULL)
{
return (-1);
}

while (right >= left)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value)
{
return (i);
}
if (array[i] > value)
{
right = i - 1;
}
else
{
left = i + 1;
}
}
return (-1);
}
