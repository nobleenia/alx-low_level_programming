#include "lists.h"

const listint_t **re(const listint_t **list, size_t size, const listint_t *new);

/**
 * print_listint_safe - prints a linked list
 * @head: the first node in the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t num = 0;
const listint_t *slow = head;
const listint_t *fast = head;

while (fast != NULL && fast->next != NULL)
{
num++;
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next;

if (slow == fast)
{
printf("->[%p] %d\n", (void *)slow, slow->n);
return (num);
}
}

while (head != NULL)
{
num++;
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

return (num);
}
