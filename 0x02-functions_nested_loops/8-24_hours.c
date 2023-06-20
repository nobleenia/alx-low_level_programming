#include "main.h"

/**
 * jack_bauer - main input of the program
 * 
 * Return: void - -has no return
 */
void jack_bauer(void)
{
int hrs, mins;
for (hrs = 0; hrs <= 23; hrs++)
{
for (mins = 0; mins <= 59; mins++)
{
_putchar('0' + hrs);
_putchar(':');
_putchar('0' + mins);
_putchar('\n');
}
}
}
