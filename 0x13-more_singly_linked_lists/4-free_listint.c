#include "lists.h"

/**
 * free_listint - fress a linked lidst
 * @head: first node in the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
