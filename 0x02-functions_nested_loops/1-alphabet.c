#include "main.h"

/**
 * main - Starting point
 *
 * Return: void (successful completion)
 */
void print_alphabet(void)
{
int lower_case = 'a';
while (lower_case <= 'z')
{
_putchar(lower_case);
lower_case++;
}
_putchar('\n');
}
