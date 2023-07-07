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
int n = 0;
int a =  atoi(argv[1]);
int b = atoi(argv[2]);

if (argc == 3)
{
n = a * b;
printf("%d\n", n);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
