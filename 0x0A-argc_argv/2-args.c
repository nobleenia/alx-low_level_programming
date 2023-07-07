#include <stdio.h>

/**
 * main - prints the arguments passed in it
 * @argc: the arguments counter
 * @argv: the arguments vector
 *
 * Return: 0 Successful
 */
int main(int argc, char **argv)
{
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
