#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program
 * 
 * Return: 0 successful
 */
int main(void)
{
int pass[100];
int sum = 0;
int i, n;

sum = 0;
srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
sum += (pass[i] + '0');
putchar(pass[i] + '0');
if ((2772 - sum) - '0' < 78);
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
	
}
}
putchar('\n');
return (0);
}
