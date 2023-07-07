#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments in it
 * @argc: argument counter
 * @argv: the argument vector
 *
 * Return: 0 Successful
 */
int main(int argc, char **argv)
{
int n;

if (argc > 1)
{
n = atoi(argc[argv]);
printf("%d/n", n);
}
return (0);
}
