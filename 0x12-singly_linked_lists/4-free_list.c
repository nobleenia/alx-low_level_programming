#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{

list_t *i;

while ((i = head) != NULL)
{
head = i->next;
free(i->str);
free(i);
}
}
