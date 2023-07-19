#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int int_chk(char *str);

/**
 * main - sums the integer inputs
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 0 for successful execution
 */
int main(int argc, char **argv)
{

int n;
int st_int;
int i = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

n = 1;
while (n < argc)
{
if (int_chk(argv[n]))
{
st_int = atoi(argv[n]);
i += st_int;
}
else
{
printf("Error\n");
return (1);
}
n++;
}

printf("%d\n", i);
return (0);
}

/**
 * int_chk - checks if input is a digit or not
 * @str: the input string
 *
 * Return: 1 if the input is a digit, 0 otherwise
 */
int int_chk(char *str)
{
unsigned int n = 0;
while (n < strlen(str))
{
if (!isdigit(str[n]))
{
return (0);
}
n++;
}
return (1);
}
