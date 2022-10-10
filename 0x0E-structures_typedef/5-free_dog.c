#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory of dog
 * @d: dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
