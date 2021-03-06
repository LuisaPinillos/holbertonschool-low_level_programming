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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
