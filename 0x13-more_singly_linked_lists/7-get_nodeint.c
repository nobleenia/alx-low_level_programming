#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: the first node of the linked list
 * @index: index of the node, starting at 0
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
listint_t *temp = head;

while (temp && n < index)
{
temp = temp->next;
n++;
}
return (temp ? temp : NULL);
}
