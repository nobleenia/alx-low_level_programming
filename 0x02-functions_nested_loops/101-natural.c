#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
int val = 1024;
int sum = 0;

int i;
for (i = 0; i < val; i++)
if ((i % 3) == 0 || (i % 5) == 0)
{
sum = sum + i;	
}
printf("%d\n", sum);
}
return (0);
}
