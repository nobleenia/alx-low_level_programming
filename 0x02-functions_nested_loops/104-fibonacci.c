#include <stdio.h>

/**
 * main - Starting point of program
 *
 * Return: 0 successful
 */
int main(void)
{
  unsigned long prev_1, prev_2, post_1, dis;
unsigned int n;

prev_1 = 1;
prev_2 = 2;

printf("%lu, %lu", prev_1, prev_2);

for (n = 3; n <= 98; n++)
{
post_1 = prev_1 + prev_2;
printf(", %lu", post_1);

dis = prev_1;
prev_1 = prev_2;
prev_2 = post_1;
}

printf("\n");
return (0);
}
