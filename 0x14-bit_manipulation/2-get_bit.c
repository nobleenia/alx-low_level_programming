#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the input integer to be printed from
 * @index: index of the bit to be gotten
 *
 * Return: value of the bit at index index, -1 for erro
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int max = 0x01;

max <<= index;

if (max == 0)
{
return (-1);
}

if (n & max)
{
return (1);
}
else
{
return (0);
}
}
