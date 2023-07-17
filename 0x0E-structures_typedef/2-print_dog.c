#include "dog.h"
#include <stdlib>

/**
 * print_dog - prints the struct_dog info
 * @d: the struct_dog to be printed
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
if (d->age == NULL)
{
printf("Age: (nil)");
}
if (d->owner == NULL)
{
printf("Owner: (nil)");
}
}
