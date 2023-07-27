#include "lists.h"

/**
 * bef_main - function that executes before main
 *
 * Return: void
 */
void __attribute__((constructor)) bef_main()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
