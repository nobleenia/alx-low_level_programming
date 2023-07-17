#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}

d->name = name;
d->age = age;
d->owner = owner;

}
