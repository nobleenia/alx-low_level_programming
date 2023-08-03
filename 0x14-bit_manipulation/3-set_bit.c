#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the input integer to be worked on
 * @index: the index to be changed to 1
 *
 * Return: 1 for succes, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int max = 0x01;

max <<= index;

if (max == 0)
{
return (-1);
}

*n |= max;
return (1);
}
