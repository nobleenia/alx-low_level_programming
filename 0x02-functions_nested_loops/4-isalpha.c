#include "main.h"

/**
 * _isalpha - Starting point of function to check for alphabets
 * 'c': the input characters to be checked
 * Return: the value 1 for characters, 0 for otherwise
 */
int _isalpha(int c)
{
int lower_case, upper_case;
int alphabet = 0;

int lower_case = 'a';
while (lower_case <= 'z')
{
int upper_case = 'A';
while (upper_case <= 'Z')
{
if (lower_case == c || upper_case == c)
{
alphabet = 1;
}
upper_case++;
}
lower_case++;
}
return (alphabet);
}
