#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints elements in the linked list
 * @h: pointer to the linked list
 *
 * Return: the num of items in the list
 */
size_t print_list(const list_t *h)
{
size_t num = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
num++;
}
return (num);
}
