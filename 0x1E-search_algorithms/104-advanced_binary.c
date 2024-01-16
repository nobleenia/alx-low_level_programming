#include "search_algos.h"

int rec_search(int *array, size_t size, int value);

/**
 * advanced_binary - returns the index of the first value
 * in the array even if it appears more than once
 *
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located OR
 * -1 if value not in array or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
int index;

index = rec_search(array, size, value);

if (index >= 0 && array[index] != value)
{
return (-1);
}

return (index);
}

/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number or -1 for failure
 */
int rec_search(int *array, size_t size, int value)
{
size_t mid = size / 2;
size_t i;

if (array == NULL || size == 0)
{
return (-1);
}

printf("Searching in array");

for (i = 0; i < size; i++)
{
printf("%s %d", (i == 0) ? ":" : ",", array[i]);
}

printf("\n");

if (mid && size % 2 == 0)
{
mid--;
}

if (value == array[mid])
{
if (mid > 0)
{
return (rec_search(array, mid + 1, value));
}
return ((int)mid);
}

if (value < array[mid])
{
return (rec_search(array, mid + 1, value));
}
mid++;
return (rec_search(array + mid, size - mid, value) + mid);
}
