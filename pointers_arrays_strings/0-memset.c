#include "main.h"
#include <stdio.h>
/**
 * _memset - function that copies me
 * @s :pointeur
 * @b :pointeur
 * @n :pointeur
 * return: s
 * **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
