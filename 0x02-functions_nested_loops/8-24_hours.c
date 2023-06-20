#include "main.h"

/**
 * jack_bauer - main input of the program
 * 
 * Return: void - -has no return
 */
void jack_bauer(void)
{
int hrs = 0;
while (hrs <= 23)
{
for (mins = 0; mins <= 59; mins++)
{
_putchar("%02d:%02d\n", hrs, mins);
mins++;
}
 hrs++;
}
}
