#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isNumber(char *str);
int multiply(int num1, int num2);

/**
 * main - start of main program
 * @argc: argument counter
 * @argv: argument vector array
 *
 * Return: 98 for error and 0 if successful
 */
int main(int argc, char *argv[])
{
int num1, num2, product;

char *num_1;
char *num_2;

if (argc != 3)
{
printf("Error\n");
return (98);
}
num_1 = argv[1];
num_2 = argv[2];

if ((!isNumber(num_1)) || (!isNumber(num_2)))
{
printf("Error\n");
return (98);
}
num1 = atoi(num_1);
num2 = atoi(num_2);

product = multiply(num1, num2);

printf("%d\n", product);

return (0);
}

/**
 * isNumber: check if input is a digit
 * @str: the input character
 *
 * Return: 1 for digit, 0 for non-digit
 */
int isNumber(char *str)
{
int i;
while (str[i])
{
if (str[i] < '0' || str[i] > '9')
{
return (0);
}
i++;
}
return (1);
}

/**
 * multiply - product of input values
 * @num1: the first input integer
 * @num2: the second input integer
 *
 * Return: product of input
 */
int multiply(int num1, int num2)
{
int product = num1 * num2;
return (product);
}
