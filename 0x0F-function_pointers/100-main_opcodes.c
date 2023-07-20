#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program starting point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 succesful
 */
int main(int argc, char **argv)
{

int bytes, n;
unsigned char *main_func;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

main_func = (unsigned char *)main;

for (n = 0; n < bytes; n++)
{

printf("%02x\n", main_func[n]);
if (n < bytes - 1)
{
printf(" ");
}
}
printf("\n");
return (0);
}
