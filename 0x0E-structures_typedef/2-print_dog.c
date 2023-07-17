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
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

if (d->age == NULL)
{
printf("Age: (nil)");
}
else
{
printf("Age: %f\n", d->age);
}

if (d->owner == NULL)
{
printf("Owner: (nil)");
}
else
{
printf("Owner: %s\n", d->owner);
}

}
