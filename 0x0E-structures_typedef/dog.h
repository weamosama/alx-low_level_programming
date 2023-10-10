#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 *struct dog - Represents information about a dog.
 *@name: Pointer to a string containing the dog's name.
 *@age: The age of the dog.
 *@owner: Pointer to a strin
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
