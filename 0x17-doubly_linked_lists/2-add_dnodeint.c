#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer of the first node in the list
 * the value of the new_node to be added
 *
 * Return: the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;

if (*head == NULL)
{
new_node->next = NULL;
new_node->prev = NULL;
}
else
{
new_node->next = *head;
new_node->prev = NULL;
(*head)->prev = new_node;
}

*head = new_node;

return (new_node);
}
