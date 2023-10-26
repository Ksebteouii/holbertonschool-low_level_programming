#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0' && dest[i] != '\0'; i++)
	{
		strcpy(dest[i], src[i]);
	}
	printf("Copied String: %s\n", source);
	return 0;
}
