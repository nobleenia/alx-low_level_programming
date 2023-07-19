#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array to be iterated
 * @size: size of the array
 * @action:  pointer to the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int n;

if (array == NULL || action == NULL)
{
return;
}

for (n = 0; n < size; n++)
{
action(array[n]);
}

}
