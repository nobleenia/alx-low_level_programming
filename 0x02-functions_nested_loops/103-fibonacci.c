#include <stdio.h>

/**
* main- initializes the program
* the fibonacci algorithms
* Return: 0 successful completion
*/
int main(void)
{
unsigned long fst, sec, sum_val, sum;
int n;

fst = 0;
sec = 0;
sum = 0;

for (n = 1; n <= 34; n++)
{
if (sec <= 4000000 && (sec % 2) == 0)
{
sum = sum + sec;
}
sum_val = fst + sec;
fst = sec;
sec = sum_val;
}
printf("%lu\n", sum);
return (0);
}
