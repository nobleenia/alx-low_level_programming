#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: the first node in the linked list
 *
 * Return: head node or 0 if empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
{
return (0);
}

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
