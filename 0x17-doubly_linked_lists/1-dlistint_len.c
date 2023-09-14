#include "lists.h"

/**
 *
 *
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
const dlistint_t *current = h;

while (current != NULL)
{
current = current->next;
count++;
}
return(count);
}
