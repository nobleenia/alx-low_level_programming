#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of the data in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum+=current->n;
current = current->next;
}
return (sum);
}
