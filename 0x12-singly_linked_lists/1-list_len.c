#include "lists.h"
/**
 * list_len - prints the number of elements in a list
 * @h: the list to be printed
 *
 * Return: the number of items in the list
 */
size_t list_len(const list_t *h)
{
size_t count;
count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
