#include "main.h"

/**
 * jack_bauer - main input of the program
 * 
 * Return: void - -has no return
 */
void jack_bauer(void)
{
int hrs, mins;

hrs = 0;
while (hrs <= 23)
{
mins = 0; 
while (mins <= 59)
{
_putchar('0' + (hrs / 10));
_putchar('0' + (hrs % 10));
_putchar(':');
_putchar('0' + mins / 10);
_putchar('0' + mins % 10);
_putchar('\n');
mins++;
}
hrs++;
}
}
