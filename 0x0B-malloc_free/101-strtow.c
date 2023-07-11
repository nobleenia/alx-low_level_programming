#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_wrd(char *str);
char **assign_wrd(int wrd_cnt);
void split_str(char *str, char **wrd);

/**
 * strtow - splits input string into single words
 * @str: the input string to be split
 *
 * Return: pointer to the array of words
 */
char **strtow(char *str)
{

int wrd_cnt = count_wrd(str);
char **wrd;

if (wrd_cnt == 0)
{
return (NULL);
}

wrd = assign_wrd(wrd_cnt);
if (wrd == NULL)
{
return (NULL);
}

split_str(str, wrd);
return (wrd);
}

/**
 * count_wrd - count the number of words in inoput string
 * @str: the input string
 *
 * Return number of words in string
 */
int count_wrd(char *str)
{

int wrd_cnt, n_wrd, i;

if (str == NULL || *str == '\0')
{
return (0);
}
wrd_cnt = 0;
n_wrd = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && !n_wrd)
{
n_wrd = 1;
wrd_cnt++;
}
else if (str[i] == ' ')
{
n_wrd = 0;
}
}
return (wrd_cnt);
}

/**
 * assign_wrd - allocate memory to the array using malloc
 * @wrd_cnt: the number of words in the array
 *
 * Return: pointer to the memory assigned
 */
char **assign_wrd(int wrd_cnt)
{
  char **wrd = malloc((wrd_cnt + 1) * sizeof(char *));
if (wrd == NULL)
{
return (NULL);
}
return (wrd);
}

/**
 * split_str - split the string int words
 * @str: the string to be split
 * @wrd: array of words to be stored in wrd
 *
 * Return: nothing
 */
void split_str(char *str, char **wrd)
{

int ind = 0;
int n_wrd = 0;
int start = 0;

int len;

int i, j;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && !n_wrd)
{
n_wrd = 1;
start = 1;
}
else if (str[i] == ' ' && n_wrd)
{
n_wrd = 0;
len = i - start;
wrd[ind] = malloc((len + 1) * sizeof(char));

if (wrd[ind] == NULL)
{
for (j = 0; j < ind; j++)
{
free(wrd);
}
free(wrd);
return;
}
strncpy(wrd[ind], &str[start], len);
wrd[ind][len] = '\0';
ind++;
}
}
wrd[ind] = NULL;
}
