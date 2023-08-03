#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first integer to be flipped
 * @m: second integer to be flipped
 *
 * Return: number of bits to flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int xor = n ^ m;

while (xor != 0)
{
count += xor & 1;
xor >>= 1;
}

return (count);
}
