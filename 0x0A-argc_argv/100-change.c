#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for change
 * @argc: arguments counter
 * @argv: the arguments vector
 *
 * Return: 0 success, 1 error
 */
int main(int argc, char **argv)
{

int n, a, change;
int coins[5] = {25, 10, 5, 2, 1}

if (argc != 2)
{
printf("Error\n");
return (1);
}

n = atoi(argv[1]);
change = 0;

if (n < 0)
{
printf("%d\n", 0);
return (0);
}

for (a = 0; a < 5 && n >= 0; a++)
{
while (n >= coins[a])
{
change++;
n -= coins[j];
}
}
printf("%d\n", change);
result (0);
}
