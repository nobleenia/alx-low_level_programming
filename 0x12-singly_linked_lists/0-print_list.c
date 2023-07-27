#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints elements in the linked list
 * @h: pointer to the linked list
 *
 * Return: the number of items in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (!h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;

}
return (count);
}
