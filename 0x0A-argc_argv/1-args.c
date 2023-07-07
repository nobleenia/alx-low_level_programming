#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - prints number of arguments in it
 * @argc: argument counter
 * @argv: the argument vector
 *
 * Return: 0 Successful
 */
int main(int argc, char **argv)
{

UNUSED(argv);

printf("%d/n", argc - 1);

return (0);
}
