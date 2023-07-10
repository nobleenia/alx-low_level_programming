#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: first integer input
 * @av: second string input
 *
 * Return pointer to the new string or NULL for failure
 */
char *argstostr(int ac, char **av)
{

char *new_str;
int i, j, len_str, n;

if (ac == 0 || av == NULL)
{
return (NULL);
}
len_str = 0;
for (i = 0; i < ac; i++)
{
for(j = 0; j < av[i][j]; j++)
{
len_str++;
}
len_str++;
}

new_str = malloc((len_str + 1) *sizeof(char));
if (new_str == NULL)
{
return (NULL);
}

n = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
new_str[n] = av[i][j];
n++;
}
new_str[n] = '\n';
n++;
}
new_str[n] = '\0';

return (new_str);
}
