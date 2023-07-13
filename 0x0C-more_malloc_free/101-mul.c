#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

void Errors();
int isNumber(char *s);
void product(char *num1, char *num2);

/**
 * main - start of main program
 * @argc: argument counter
 * @argv: argument vector array
 *
 * Return: 98 for error and 0 if successful
 */
int main(int argc, char *argv[])
{
char *num_1, *num_2;

if (argc != 3)
{
Errors();
}

num_1 = argv[1];
num_2 = argv[2];
if (!isNumber(num_1) || !isNumber(num_2))
{
Errors();
}

product(num_1, num_2);

return (0);
}

/**
 * Errors - prints error message
 */
void Errors()
{
char error[] = "Error\n";
int len = sizeof(error) - 1;
write(2, error, len);
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
if ((*s < '0') || (*s > '9'))
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
 */
void product(char *num1, char *num2)
{
int len1 = 0;
int len2 = 0;
int a, b, num_1, num_2, add, sum, k;
int *res;

char *output;

while (num1[len1])
{
len1++;
}
while (num2[len2])
{
len2++;
}

res = malloc((len1 + len2) * sizeof(int));
if (res == NULL)
{
Errors();
}

for (a = 0; a < len1 + len2; a++)
{
res[a] = 0;
}

for (a = len1 - 1; a >= 0; a--)
{
num_1 = num1[a] - '0';
add = 0;

for (b = len2 - 1; b >= 0; b--)
{
num_2 = num2[b] - '0';
sum = num_1 * num_2 + res[a + b + 1] + add;
add = sum / 10;
res[a + b + 1] = sum % 10;
}

if (add > 0)
{
res[a + b + 1] += add;
}
}

a = 0;
while (res[a] == 0 && a < len1 + len2 - 1)
{
a++;
}

output = malloc((len1 + len2 - a + 1) * sizeof(char));
if (output == NULL)
{
Errors();
}

k = 0;
while (a < len1 + len2)
{
output[k] = res[a] + '0';
a++;
k++;
}
output[k] = '\n';

write(1, output, k + 1);

free(res);
free(output);
}
