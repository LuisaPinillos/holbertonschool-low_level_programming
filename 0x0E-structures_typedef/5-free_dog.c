#include "stdio.h"
#include "stdlib.h"
#include "dog.h"

/**
 * free_dog - Memory free
 * @d: Pointer
 * Description:the memory is free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
