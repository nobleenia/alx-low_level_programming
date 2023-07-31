#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index of a linked list
 * @head: the first node in the linked list
 * @index: the index to be deleted
 *
 *Return: 1 successful, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int counter = 0;
listint_t *current = NULL;
listint_t *temp = *head;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (counter < index - 1)
{
if (!temp || !(temp->next))
{
return (-1);
}

temp = temp->next;
counter++;
}
current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
