#include <stdio.h>

/**
* main- initializes the program
* the fibonacci algorithms
* Return: 0 successful completion
*/
int main(void)
{
unsigned long sum_val;

unsigned long fst = 0;
unsigned long seq = 0;
unsigned long sum = 0;

while (seq <= 4000000)
{
if (seq % 2 == 0)
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
