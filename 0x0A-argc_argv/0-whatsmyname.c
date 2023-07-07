#include <stdio.h>
#include "main.h"

#define UNUSED(x) (void)(x)

/**
 * main - prints program name followed by a new line
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 0 successful
 */
int main(int argc, char **argv)
{

UNUSED(argc);
printf("%s\n", argv[0]);
return (0);
}
