#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to std-output
 * @c: Character to be printed
 * Return: 0 indicates successful
 * error returns -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
