#include "stdio.h"
#include "stdlib.h"
#include "dog.h"

/**
 * init_dog - Initialize a dog
 * @name: Name dog
 * @age: Age dog
 * @owner:Owner
 * @d: Pointer
 * Description: Data of a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = NULL;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

