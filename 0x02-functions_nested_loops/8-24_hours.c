#include "main.h"

/**
 * jack_bauer - main input of the program
 * 
 * Return: void - -has no return
 */
void jack_bauer(void)
{
for (int hrs = 0; hrs <= 23; hrs++)
{
for (int mins = 0; mins <= 59; mins++)
{
_putchar(hrs);
_putchar(mins);
_putchar('\n');
mins++;
}
hrs++;
}
}
