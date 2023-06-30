#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: pointer to the content of size bytes of the buffer
 * @size: indicator of the buffer size
 * Return: void
 */
void print_buffer(char *b, int size)
{
int a, d, c;

if (size <= 0)
{
printf("\n");
return;
}

for (a = 0; a < size; a += 10)
{
d = (size - a) < 10 ? (size - a) : 10;
printf("%08x: ", a);

for (c = 0; c < 10; c++)
{
if (c < d)
printf("%02hhx", b[a + c]);
else
printf("  ");

if (c % 2 == 1)
printf(" ");
}

printf(" ");

for (c = 0; c < d; c++)
{
char f = b[a + c];
if (f < 32 || f > 126)
f = '.';
printf("%c", f);
}

printf("\n");
}  
}
