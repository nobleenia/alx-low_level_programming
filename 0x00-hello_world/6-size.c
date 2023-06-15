#include<stdio.h>
/**
 * main - Program starting point
 *
 * Return: 0 (indicating successful completion)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of float: %lu byte(s)\n", sizeof(float));
printf("Size of double: %lu byte(s)\n", sizeof(double));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of long long: %lu byte(s)\n", sizeof(long long));
printf("Size of pointer: %lu byte(s)\n", sizeof(void*));
printf("Size of a char: 1 byte(s)");
printf("Size of an int: 4 byte(s)");
printf("Size of a long int: 4 byte(s)");
printf("Size of a long long int: 8 byte(s)");
printf("Size of a float: 4 byte(s)");
return (0);
}
