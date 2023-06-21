#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
int a = 1024;
int counter = 0;
int i;
for (i = 0; i < a; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
counter = counter + 1;	
}
printf("%d\n", counter);
}
return (0);
}
