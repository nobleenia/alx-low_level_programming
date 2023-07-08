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
int cents = atoi(argv[1]);
int n = 0;

if (argc != 1)
{
printf("Error\n");
return (1);
}

if (cents < 0)
{
printf("%d\n", 0);
}

while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
}
else if (cents >= 10)
{
cents -= 10;
}
else if (cents >= 5)
{
cents -= 5;
}
else if (cents >= 2)
{
cents -= 2;
}
else if (cents >= 1)
{
cents -= 1;
}
n++;

}
printf("%d\n", n);
return (0);
}
