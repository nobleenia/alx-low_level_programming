#include "main.h"

/**
 * swap_int - program that swaps values between two integers
 * @a - the first of two integers
 * @b - the second of the two integrs
 */
void swap_int(int *a, int *b)
{
int s = *a;
*a = *b;
*b = s;
}
