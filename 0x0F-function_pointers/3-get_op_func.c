#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - gets the desired function operation
 * @s:  the operator passed as argument to the program
 *
 * Return: the integer value of pointer to operation function
 */
int(*get_op_func(char *s))(int, int)
{

operand_func op_s[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
};

int n = 0;
while (op_s[n].operand != NULL)
{
if (strcmp(s, op_s[n].operand) == 0)
{
return op_s[n].f;
}
n++;
}

return (NULL);
}
