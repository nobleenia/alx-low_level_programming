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
int ret_val;

unsigned int size_uli = sizeof(unsigned long int) * 8;

if (index >= size_uli)
{
return (-1);
}

ret_val = (n >> index) & 1;

return (ret_val);
}
