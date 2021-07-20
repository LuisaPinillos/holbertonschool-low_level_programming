#include "stdio.h"
#include "stdlib.h"
#include "dog.h"

/**
 * _strlen - long of a string
 * @str: string
 * Return: lon
 */

int _strlen(char *str)
{
	int lon = 0;

	while (str[lon] != '\0')
	{
		lon++;
	}
	return (lon);
}

/**
 * _fill - store a string in the memory
 * @dest: string
 * @src: source string
 * Return: dest
 */

void _fill(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

/**
 * new_dog - function that creates a new dog
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner
 * Return: ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptrdog;

	ptrdog = malloc(sizeof(dog_t));

	if (ptrdog == NULL)
	{
		return (NULL);
	}

	ptrdog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (ptrdog->name == NULL)
	{
		free(ptrdog);
		return (NULL);
	}
	ptrdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (ptrdog->owner == NULL)
	{
		free(ptrdog->name);
		free(ptrdog);
		return (NULL);
	}

	_fill(ptrdog->name, name);
	_fill(ptrdog->owner, owner);
	ptrdog->age = age;

	return (ptrdog);
}
