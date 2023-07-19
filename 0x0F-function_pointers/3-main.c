#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that performs simple math operations
 * @argc: argument counter
 * @argv: arguments vector
 *
 * Return: 0 successful, 98 argc error, 99 operand error
 */
int main(int argc, char **argv)
{

int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

func = get_op_func(argv[2]);
if (func == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
return (0);
}
