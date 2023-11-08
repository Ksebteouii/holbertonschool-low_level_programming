#include <stdlib.h>
#include "main.h"
/**
 malloc_checked-function that allocates memory using malloc
 * @b:size allocated memorry
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
		exist(98);
	return (p);
}
