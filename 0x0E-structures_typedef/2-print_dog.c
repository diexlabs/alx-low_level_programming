#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints out a dog instance formated
 * @d: the dog instance to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	(!d->age) ? printf("Age: %s\n", "(nil)") : printf("Age: %.6f\n", d->age);

	printf("Owner: %s\n", !(d->owner) ? "(nil)" : d->owner);
}
