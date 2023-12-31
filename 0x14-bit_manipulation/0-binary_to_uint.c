#include "main.h"

/**
 * binary_to_uint - converts a string of characters to unsigned integer
 * @b: pointer to the input charaters
 *
 * Return: 0 if b is NULL or not binary, converted integer
 */
unsigned int binary_to_uint(const char *b)
{
int n = 0;
unsigned int dec = 0;

if (b == NULL)
{
return (0);
}
while (b[n] != '\0')
{
if (b[n] == '0' || b[n] == '1')
{
dec = dec << 1;
dec += b[n] - '0';
n++;
}
else
{
return (0);
}
}
return (dec);
}
