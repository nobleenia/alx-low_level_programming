#include "lists.h"

size_t listint_t_len (const listint_t *head);

/**
 * print_listint_safe - prints a linked list
 * @head: the first node in the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t num, idx = 0;
num = listint_t_len(head);

if (num == 0)
{
for (; head != NULL; num++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (idx = 0; idx < num; idx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (num);
}

/**
 * listint_t_len - counts the number of unique nodes in a linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: number of nodes, 0 for failure
 */
size_t listint_t_len(const listint_t *head)
{
const listint_t *slow, *fast;
size_t num = 1;

if (head == NULL || head->next == NULL)
{
return (0);
}
slow = head->next;
fast = (head->next)->next;

while (fast)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
num++;
slow = slow->next;
fast = fast->next;
}
slow = slow->next;
return (num);
}
slow = slow->next;
fast = (fast->next)->next;
}
return (0);
}
