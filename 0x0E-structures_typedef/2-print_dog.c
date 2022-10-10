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

	!d->name ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);

	!d->age ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);

	!d->owner ? printf("Owner: (nil)\n") : 	printf("Owner: %s\n", d->owner);
}
