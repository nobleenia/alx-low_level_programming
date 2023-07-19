#include "function_pointers.h"

/**
 * print_name - start of function that prints input name
 * @name: pointer to name to be printed
 * @f: pointer to function to print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
{
return;
}

f(name);
}
