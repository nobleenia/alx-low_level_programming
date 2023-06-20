#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to "stdout"
 * @c: The character to print
 *
 * Return: 1 (successful)
 * If error, returns -1, and errno set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
