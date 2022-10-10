#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *_name;
	char *_owner;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->age = age;
	
	if (d->name)
	{
		_name = malloc(sizeof(char) * (strlen(name) + 1));
		if (!_name)
			return (NULL);
		strcpy(_name, name);
		d->name = _name;
		free(_name);
	}
	else
		d->name = NULL;
	
	if (d->owner)
	{
		_owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (!_owner)
			return (NULL);
		strcpy(_owner, owner);
		d->owner = _owner;
		free(_owner);
	}
	else
		d->owner = NULL;
	return (d);
}
