#include "main.H"

/**
 *
 *
 *
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
       upper_case++;
     }
   }
 lower_case++;
   }
 return (alphabet);
}
