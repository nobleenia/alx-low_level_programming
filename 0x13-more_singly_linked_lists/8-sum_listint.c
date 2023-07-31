#include "lists.h"

/**
 * sum_listint - sums all the data of the linked list
 * @head: the first node in the linked list
 *
 * Return the value of the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

if(!head)
{
return (0);
}

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
