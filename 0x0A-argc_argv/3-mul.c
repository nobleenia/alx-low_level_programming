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

int a = atoi(argv[1]);
int b = atoi(argv[2]);

if (argc != 3)
{
printf("Error\n");
return (1);
}
int n = a * b;
printf("%d\n", n);

return (0);
}
