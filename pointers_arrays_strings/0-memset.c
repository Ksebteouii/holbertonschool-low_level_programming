#include "main.h"
#include <stdio.h>
/**
 * _memse - function that copies me
 * return: s
 * @s :pointeur
 * @b :pointeur
 * @n :pointeur
 * **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0, i < n, i++)
	{
		s[i] = b;
	}
	return (s);
}
