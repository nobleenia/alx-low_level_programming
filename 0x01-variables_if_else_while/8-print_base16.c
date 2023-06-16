#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 (indicate successful running)
 */
int main (void)
{
int hex_numbers = 0;
char hex_alphabets = 'a';

while (hex_numbers <= 9)
{
putchar('0' + hex_numbers);
hex_numbers++;
}
while (hex_alphabets <= 'f')
{
putchar(hex_alphabets);
hex_alphabets++;
}
putchar('\n');
return (0);
}
