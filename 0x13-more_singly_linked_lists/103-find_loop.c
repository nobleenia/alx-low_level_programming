#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the first node in the linked list
 *
 * Return: address of the node of the head
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
{
return (NULL);
}

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
