#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new instance of dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *jack;
	char *nname, *nowner;
	int name_len, owner_len;

	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;
	nname = malloc(owner_len * sizeof(*nname));
	nowner = malloc(name_len * sizeof(*nowner));
	jack = malloc(sizeof(jack));

	if (!nname || !nowner || !jack)
		return (NULL);

	_memcpy(nowner, owner, owner_len);
	_memcpy(nname, name, name_len);
	jack->name = nname;
	jack->age = age;
	jack->owner = nowner;

	return (jack);
}

/**
 * _strlen - calculates the length of a string
 * @c: the string to calculate the length
 *
 * Return: returns the length of the string
 */

int _strlen(char *c)
{
	int length, i;

	i = 0;
	length = 0;
	while (*(c + i++) != '\0')
		length++;

	return (length);
}

/**
 * _memcpy - copies a characters from src memory area to target mem area
 * @dest: destination mem area
 * @src: source mem area
 * @n: number of characters to copy
 *
 * Return: returns thea address of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*dest++ = *src++;

	return (dest);
}
