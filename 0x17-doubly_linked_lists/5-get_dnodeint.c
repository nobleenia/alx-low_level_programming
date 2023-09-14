#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node of the list
 * @index: the index of the node to return
 *
 * Return: the desired node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count != index)
{
current = current->next;
count++;
}
else
{
return(current);
}
}
return(NULL);
}
