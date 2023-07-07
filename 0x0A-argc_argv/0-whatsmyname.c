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
char *name = argv[0];
char *dlm = name;
while (*name != '\0')
{
if (*name == '/')
{
dlm = name + 1;
}
name++;
}
printf("%s\n", dlm);
return (0);
}
