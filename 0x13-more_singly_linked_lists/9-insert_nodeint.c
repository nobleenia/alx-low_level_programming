#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a
 * given position in the linked list
 * @head: first node of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be inserted
 *
 * Return: NULL for empty list or pointer to new node 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count;
listint_t *new_node;
listint_t *temp;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (count = 0; temp && count < idx; count++)
{
if (count == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_mode);
}
else
{
temp = temp->next;
}
}
return (NULL);
}
