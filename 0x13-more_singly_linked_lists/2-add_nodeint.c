#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to first element of the linked list
 * @n: elemznt to be added to the 
 *
 * Return: NULL, failure and address of new item for success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_item;

new_item = malloc(sizeof(listint_t));

if (!new_item)
{
return (NULL);
}
new_item->n = n;
new_item->next = *head;
*head = new_item;

return (new_item);
}
