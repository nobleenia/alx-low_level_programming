#include <stdio.h>

/**
* main- initializes the program
* the fibonacci algorithms
* Return: 0 successful completion
*/
int main(void)
{
unsigned long int fst, seq, sum, sum_val;

fst = 1;
seq = 2;
sum = 0;

while (seq <= 4000000)
{
if ((seq % 2) == 0)
{
sum = sum + seq;
}
sum_val = fst + seq;
fst = seq;
seq = sum_val;
}
printf("%lu\n", sum);
return (0);
}
