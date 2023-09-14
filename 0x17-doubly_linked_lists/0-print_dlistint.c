#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: pointer to first node in the linked list
 *
 * Return: size of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
const dlistint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
count++;
current = current->next;
}
return(count);
}
