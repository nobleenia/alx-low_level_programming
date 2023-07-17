#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to a dog structure
 * @d: pointer to memory to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{

if (d == NULL)
{
return;
}
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner);
}
free(d);

}
