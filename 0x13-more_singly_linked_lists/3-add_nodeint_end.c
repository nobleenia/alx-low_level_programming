#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: the first element of the linked list
 * @n: the node to be added to the list
 *
 * Return: NULL failure, the ddress of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_item;
listint_t *temp = *head;

new_item = malloc(sizeof(listint_t));
if (!new_item)
{
return (NULL);
}
new_item->n = n;
new_item->next = NULL;

if (*head == NULL)
{
*head = new_item;
return (new_item);
}

while (temp->next)
{
temp = temp->next;
}
temp->next = new_item;

return (new_item);
}
