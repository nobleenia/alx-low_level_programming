#include <unistd.h>

/**
 * _putchar - writes the character c to std output
 * @c: Character to be printed
 *
 * Return: 0 successful
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
