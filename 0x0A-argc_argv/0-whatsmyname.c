#include <stdio.h>
#include "main.h"

/**
 * main - prints program name followed by a new line
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 0 successful
 */
int main(int argc, char **argv)
{
char *name = argv[argc];
printf("%s\n", name);
return (0);
}
