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
	if (d)
	{
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age)
		printf("age: %f\n", d->age);
	else
		printf("age: (nil)\n");
	if (d->owner)
		printf("owner: %s\n", d->owner);
	else
		printf("owner: (nil)\n");
	}
}
