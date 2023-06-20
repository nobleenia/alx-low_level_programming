#include "main.h"

/**
 * print_alphabet_x10 - Starting point
 *
 * Return: void (successful completion)
 */
void print_alphabet_x10(void)
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
}
