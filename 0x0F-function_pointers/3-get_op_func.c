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

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}

i++;
}

return (NULL);
}
