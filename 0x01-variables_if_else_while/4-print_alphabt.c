#include <stdio.h>
/**
 * main - Starting point of the program
 *
 * Return: 0 (indication of success)
 */
int main(void)
{
char lower_cases = 'a';

while (lower_cases <= 'z')
{
if (lower_cases != 'q' && lower_cases != 'e')
{
putchar(lower_cases);
}
lower_cases++;
}
putchar('\n');
return (0);
}
