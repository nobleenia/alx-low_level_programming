#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: pointer to the content of size bytes of the buffer
 * @size: indicator of the buffer size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int x, y;
unsigned char *bf = unsigned char *b;

if (size <= 0)
{
printf("\n");
return;
}

for (x = 0; x <= size; x += 10)
{
printf("%08x: ", x);

for (y = 0; y <= 9; y++)
{
if (x + y < size)
printf("%02x", bf[x + y]);
else
printf("  ");

if (y % 2 == 0)
printf(" ");
}
for (y = 0; y <= 9; y++)
{
if (x + y >= size)
break;

if (bf[x + y] > 31 && bf[x + y] < 127)
printf("%c", bf[x + y]);
else
printf(".");
}

printf("\n");
}
}
