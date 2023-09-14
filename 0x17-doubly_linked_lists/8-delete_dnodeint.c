#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index of a linked list
 * @head: poiter to pointer of the first node of a linked list
 * @index: the index whose node is to be deleted
 *
 * Return: 1 if successful, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int counter;

if (head == NULL || *head == NULL)
{
return (-1);
}

current = *head;

if (index == 0)
{
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}

for (counter = 0; counter < index; counter++)
{
if (current->next == NULL)
{
return (-1);
}
current = current->next;
}

current->prev->next = current->next;

if (current->next != NULL)
{
current->next->prev = current->prev;
}

free(current);

return (1);
}
