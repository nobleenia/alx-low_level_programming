#include <stdio.h>

/**
 * main - Starting point of program
 *
 * Return: 0 successful
 */
int main(void)
{
unsigned long prev_1, prev_2, post_1, post_2, carry_1, carry_2, carry_3, limit;
int n;

prev_1 = 0;
prev_2 = 0;
post_1 = 1;
post_2 = 2;
limit = 10000000000;

printf("%lu, %lu", post_1, post_2);
for (count = 2; count < 98; count++)
{

if (post_1 + post_2 > limit || prev_2 > 0 || prev_1 > 0)
{
carry_1 = (post_1 + post_2) / limit;
carry_2 = (post_1 + post_2) % limit;
carry_3 = prev_1 + prev_2 + carry_1;
prev_1 = prev_2, prev_2 = carry_3;
post_1 = post_2, post_2 = carry_2;
printf("%lu%010lu", prev_2, post_2);
}
else
{
carry_2 = post_1 + post_2;
prev_1 = post_2, post_2 = carry_2;
printf("%lu", post_2);
}
if (count != 97)
printf(", ");
}
printf("\n");
return (0);
}
