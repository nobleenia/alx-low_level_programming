#include "main.h"

/**
 * print_alphabet_x10 - Starting point
 *
 * Return: void (successful completion)
 */
void print_alphabet_x10(void)
{
int counter = 10;
while (counter >= 1)
{
int lower_case = 'a';
while (lower_case <= 'z')
{
_putchar(lower_case);
lower_case++;
}
_putchar('\n');
counter--;
}
}
