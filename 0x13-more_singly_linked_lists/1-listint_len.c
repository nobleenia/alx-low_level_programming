#include "lists.h"

/**
 * listint_len - returns the number of items in the linked list
 * @h: pointer to the linked list
 *
 * Return: the number of items in the list
 */
size_t listint_len(const listint_t *h)
{
size_t ret_val = 0;

while (h)
{
ret_val++;
h = h->next;
}
return (ret_val);
}
