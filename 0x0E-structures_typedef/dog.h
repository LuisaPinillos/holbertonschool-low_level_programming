#ifndef HOLBERTON
#define HOLBERTON

/**
 * struct dog - It's a dog, what can I say
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Description: It's a dog, what can I say
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
