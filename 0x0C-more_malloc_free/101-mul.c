#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

void errors();
int isNumber(char *s);
void product(char *num1, char *num2);

/**
 * main - start of main program
 * @argc: argument counter
 * @argv: argument vector array
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
char *num_1;
char *num_2;

if (argc != 3)
{
errors();
}

num_1 = argv[1];
num_2 = argv[2];
if (!isNumber(num_1) || !isNumber(num_2))
{
errors();
}

product(num_1, num_2);

return (0);
}

/**
 * errors - prints error message
 *
 * Return: void but exits with 98
 */
void errors()
{
printf("Error\n");
exit(98);
}

/**
 * isNumber - checks if the input is digit
 * @s: the input string
 *
 * Return: 0 if not, 1 if digit
 */
int isNumber(char *s)
{
while (*s)
{
if (!isdigit(*s))
{
return (0);
}
s++;
}
return (1);
}

/**
 * product - multiplies the input characters
 * @num1: the first input characters
 * @num2: the second input characters
 *
 * Return: void
 */
void product(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int total_len = len1 + len2;
int *res;
int i, j, start, idx, carry, digit1, digit2, product;
 
char *output;

res = malloc(total_len * sizeof(int));
if (res == NULL)
{
Errors();
}

for (i = 0; i < total_len; i++)
{
res[i] = 0;
}

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
digit1 = num1[i] - '0';

for (j = len2 - 1; j >= 0; j--)
{
digit2 = num2[j] - '0';
product = digit1 * digit2 + res[i + j + 1] + carry;
carry = product / 10;
res[i + j + 1] = product % 10;
}

res[i] += carry;
}

start = 0;
while (start < total_len - 1 && res[start] == 0)
{
start++;
}

output = malloc((total_len - start + 1) * sizeof(char));
if (output == NULL)
{
Errors();
}

idx = 0;
for (i = start; i < total_len; i++)
{
output[idx++] = res[i] + '0';
}
output[idx] = '\n';

write(1, output, idx + 1);

free(res);
free(output);
}
