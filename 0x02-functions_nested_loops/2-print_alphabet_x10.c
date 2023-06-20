#include "main.h"

/**
 * main - Starting point
 *
 * Return: 0 (successful completion
 */
int main(void)
{
int counter = 0;
while(counter < 10)
{
int lower_case = 'a';
while (lower_case <= 'z')
{
_putchar(lower_case);
lower_case++;
}
_putchar('\n');
}
counter++;
return (0);
}
