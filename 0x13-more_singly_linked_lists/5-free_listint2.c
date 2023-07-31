#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: the first node in the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
{
return;
}

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
