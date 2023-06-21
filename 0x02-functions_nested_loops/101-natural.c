#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{

int sum = 0;
int i = 0;
while (i < 1024)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
sum = sum + i;
i++;
}
printf("%d\n", sum);

return (0);
}
