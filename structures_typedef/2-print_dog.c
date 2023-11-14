#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: the struct
 * @my_dog.name: the dog name
 * @my_dog.age: the dog age
 * @my_dog.owne: the owner name
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d == NULL)
		return (NULL);
	if (d->age)
		printf("age: %d\n", d->age);
	else if (d == NULL)
		return (NULL);
	if (d->owner)
		printf("owner: %d\n", d->owner);
}
