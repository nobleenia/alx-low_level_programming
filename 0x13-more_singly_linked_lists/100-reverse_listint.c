#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the first node of the linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *after = NULL;
listint_t *prev = NULL;

while (*head)
{
after = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = after;
}
*head = prev;

return (*head);
}
