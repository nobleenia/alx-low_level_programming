#include "lists.h"

/**
 * add_node_end - appends a node at the end of the list
 * @head: head of the linked list
 * @str: string to be stored in the new node
 *
 * Return: address of the new item, NULL for failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
size_t n;

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
return (NULL);;
}
new_node->str = strdup(str);

for (n = 0; str[n]; n++)
{
}
new_node->len = n;
new_node->next = NULL;
temp = *head;

if (temp == NULL)
{
*head = new_node;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}

return (*head);
}
