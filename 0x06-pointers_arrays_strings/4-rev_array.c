#include "main.h"

/**
 * reverse_array - prints the array in reverse
 * @a: the array input
 * @n: the number of items in the array
 *
 * Return: the reverses array
 */
void reverse_array(int *a, int n)
{
  int i, rev;

  for (i = 0; i < n--; i++)
    {
      rev = a[i];
      a[i] = a[n];
      a[n] = rev;
    }
}
