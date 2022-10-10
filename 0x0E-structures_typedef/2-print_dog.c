#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog struct
 * @d: dog struct pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	!d->name ? printf("Name: %p\n", d->name) : printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	!d->owner ? printf("Owner: %p\n", d->owner) : printf("Owner: %s\n", d->owner);
}
