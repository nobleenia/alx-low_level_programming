#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input integer to be worked on
 * @index: the index to be set to 0
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int max = 1;

unsigned int size_uli = sizeof(unsigned long int) * 8;
if (index >= size_uli)
{
return (-1);
}

max <<= index;
*n &= ~max;

return (1);
}
