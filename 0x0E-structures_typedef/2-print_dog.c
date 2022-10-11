#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - print dog information
* @d : struct gog
*Return: Void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (!(d->name))
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: (nil)\n");
		printf("Owner: (nil)\n");
	}

}
