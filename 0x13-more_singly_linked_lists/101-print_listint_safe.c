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
size_t i, num = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (i = 0; i < num; i++)
{
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (num);
}
}
num++;
list = re(list, num, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (num);
}

/**
 * re - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **re(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t **new_list;
size_t i;

new_list = malloc(size * sizeof(listint_t *));
if (new_list == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
{
new_list[i] = list[i];
}
new_list[i] = new;

return (new_list);
}
