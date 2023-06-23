#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Return: 0 (successfuly completed)
 */
int main(void)
{
unsigned int prev_1, prev_2, post_1, post_2, carry_1, carry_2, carry_3;
int n;

prev_1 = 0;
prev_2 = 0;
post_1 = 1;
post_2 = 2;

printf("%u, %u", post_1, post_2);
for (n = 3; n <= 98; n++)
{
if (prev_2 > 0 || prev_1 > 0)
{
carry_1 = (post_1 + post_2) / 1000000000;
carry_2 = (post_1 + post_2) % 1000000000;
carry_3 = prev_1 + prev_2 + carry_1;
prev_1 = prev_2;
prev_2 = carry_3;
post_1 = post_2;
post_2 = carry_2;
printf(", %u", carry_2);
}
else
{
carry_2 = post_1 + post_2;
prev_1 = post_2;
post_2 = carry_2;
printf(", %u", carry_2);
}
}
printf("\n");
return (0);
}
