#include "lists.h"

/**
 * print_listint - prints the items in the singly linked list
 * @h: pointer to the list
 *
 * Return: the number of items in the list
 */
size_t print_listint(const listint_t *h)
{
size_t ret_val = 0;

while (h)
{
printf("%d\n", (h->n));
ret_val++;
h = h->next;
}

return (ret_val);
}
