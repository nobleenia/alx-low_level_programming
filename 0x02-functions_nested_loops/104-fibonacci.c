#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Return: 0 (successfuly completed)
 */
int main(void)
{
n, prev_1 = 1, post_1 = 2; len = 1000000000, prev_2; prev_3; post_2; post_3;

print("%lu", prev_1);

for (n = 1; n < 91; n++)
{
print(", %lu", post_1);
post_1 += prev_1;
prev_1 = post_1 - prev_1
}

prev_2 = (prev_1 / len);
prev_3 = (prev_1 % len);
post_2 = (post_1 / len);
post_3 = (post_1 % len);

for (n = 92; n < 99; ++n)
{
printf(", %lu", post_2 + (post_3 / len));
printf("%lu", post_3 % len);
post_2 = post_2 + prev_2;
prev_2 = post_2 - prev_2;
post_3 = post_3 + prev_3;
prev_3 = post_3 - prev_3;
}
printf("\n");
return (0);
