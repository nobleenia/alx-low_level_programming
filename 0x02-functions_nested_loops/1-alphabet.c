#include "main.h"

/**
 * main - Starting point
 *
 * Return: 0 (successful completion)
 */
int main(void)
{
int lower_case = 'a';
while (lower_case <= 'z')
{
_putchar(lower_case);
lower_case++;
}
_putchar('\n');
return (0);
}
