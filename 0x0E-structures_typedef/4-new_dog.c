#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name = name;
	char *_owner = owner;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = _name;
	d->age = age;
	d->owner = _owner;

	return (d);
}
