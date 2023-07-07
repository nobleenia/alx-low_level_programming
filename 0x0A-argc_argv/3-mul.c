#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two inputs
 * @argc: the arguments counter
 * @argv: the argument vector
 *
 * Return: 0 successful
 */
int main(int argc, char **argv)
{

if (argc != 3)
{
printf("Error\n");
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
