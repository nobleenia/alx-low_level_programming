#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t lis
 * @head: pointer to the first node in the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *temp;

while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
}
