#include <stdio.h>

/**
* main- initializes the program
* the fibonacci algorithms
* Return: 0 successful completion
*/
int main(void)
{
unsigned long fst, seq, sum;

fst = 0;
seq = 0;
sum = 0;

while (seq <= 4000000)
{
if (seq % 2 == 0)
{
sum = sum + seq;
}
unsigned long sum_val = fst + seq;
fst = seq;
seq = sum_val;
}
printf("%lu\n", sum);
return (0);
}
