#include "dog.h"

/**
 * init_dog - functions who initialise a dog informations
 * @d : a structure name
 * @name : name of dog
 * @age : age of dog
 * @owner : owner dog name
 * Return : Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
