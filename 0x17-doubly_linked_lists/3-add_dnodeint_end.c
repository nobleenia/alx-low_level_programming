#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer of the first node in the list
 * @n: the value of the node to be added
 *
 * Return: the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current;
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;

if (*head == NULL)
{
new_node->prev = NULL;
new_node->next = NULL;
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
new_node->prev = current;
new_node->next = NULL;
current->next = new_node;
}
return (new_node);
}
