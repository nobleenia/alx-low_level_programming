#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog profile
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner's name
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *golden_rtvr;

if (name == NULL || owner == NULL)
{
return (NULL);
}

golden_rtvr = malloc(sizeof(dog_t));
if (golden_rtvr == NULL)
{
return (NULL);
}

golden_rtvr->name = malloc((1 + strlen(name)) * sizeof(char));
if (golden_rtvr->name == NULL)
{
free(golden_rtvr);
return (NULL);
}

golden_rtvr->owner = malloc((1 + strlen(owner)) * sizeof(char));
if (golden_rtvr->owner == NULL)
{
free(golden_rtvr->name);
free(golden_rtvr);
return (NULL);
}

strcpy(golden_rtvr->name, name);
golden_rtvr->age = age;
strcpy(golden_rtvr->owner, owner);

return (golden_rtvr);

}
