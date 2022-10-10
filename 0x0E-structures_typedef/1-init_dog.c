#include "dog.h"

/**
 * init_dog - initializes a dog variable with attributes
 * @d: a pointer to a dog variable
 * @name: the name attribute of the dog
 * @age: the age attribute of the dog
 * @owner: the owner attribute of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
