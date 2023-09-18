#include <stdlib.h>

/**
 * rand - returns random numbers
 *
 * Return: an integer
 */
static int count_num = 0;

int rand(void)
{
int winner[] = {8, 8, 7, 9, 23, 74};

int index = count_num;
count_num++;

if (count_num >= 6)
{
count_num = 0;
}

return winner[index];
}
