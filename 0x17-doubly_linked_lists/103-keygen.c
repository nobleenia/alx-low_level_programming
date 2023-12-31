#include "lists.h"

/**
 * main - generates and prints passwords for crackme5
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char password[7];
char *pass_char;
int length = strlen(argv[1]);
int n;
int temp;

UNUSED(argc);
pass_char = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
temp = (length ^ 59) & 63;
password[0] = pass_char[temp];

temp = 0;
for (n = 0; n < length; n++)
{
temp += argv[1][n];
}

password[1] = pass_char[(temp ^ 79) & 63];
temp = 1;
for (n = 0; n < length; n++)
{
temp *= argv[1][n];
}
password[2] = pass_char[(temp ^ 85) & 63];

temp = 0;
for (n = 0; n < length; n++)
{
if (argv[1][n] > temp)
{
temp = argv[1][n];
}
}

srand(temp ^ 14);
password[3] = pass_char[rand() & 63];

temp = 0;
for (n = 0; n < length; n++)
{
temp += (argv[1][n] * argv[1][n]);
}
password[4] = pass_char[(temp ^ 239) & 63];

for (n = 0; n < argv[1][0]; n++)
{
temp = rand();
}
password[5] = pass_char[(temp ^ 229) & 63];

password[6] = '\0';
printf("%s", password);

return (0);
}
