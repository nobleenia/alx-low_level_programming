#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 (indication of success)
 */
int main(void)
{
char lower_cases = 'a';
char upper_cases = 'A';

while (lower_cases < 'z')
putchar(lower_cases);
lower_cases++;

while (upper_cases < 'Z')
putchar(upper_cases);
lower_cases++;

putchar('\n');
return (0);
}
