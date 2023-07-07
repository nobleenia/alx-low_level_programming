#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sums the integer inputs
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 0 successful
 */
int main(int argc, char **argv)
{
int n = 0;
int t;
if (argc < 2)
{
printf("0\n");
}
for (t = 1; t < argc; t++)
{
int j;
for (j = 0; argv[t][j] != '\0'; j++)
{
if (!isdigit(argv[t][j]))
{
printf("Error");
return (1);
}
}
n += atoi(argv[t]);
}
printf("%d\n", n);
return (0);
}
