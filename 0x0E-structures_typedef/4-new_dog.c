#include "stdio.h"
#include "stdlib.h"
#include "dog.h"

/**
 * *new_dog - function that creates a new dog
 * @name: Name dog
 * @age: Age dog
 * @owner:Owner
 * Return: ptr
 * Description: Data of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{

		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;

		return (ptr);
	}
}
