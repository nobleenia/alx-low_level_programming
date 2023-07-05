#include "main.h"

int prime_chck(int num, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the input to be checked
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (prime_chck(n, n - 1));
}
}

/**
 * prime_chck - check if input is prime
 * @num: the input
 * @i: the counter variable
 *
 * Return: 1 if prime, 0 if not
 */
int prime_chck(int num, int i)
{
if (i == 1)
{
return (1);
}
else if (num % i == 0)
{
return (0);
}
else
{
return (prime_chck(num, i - 1));
}
}
