#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: nember minimum
 * @max: nember maximmal
 * Return: m
 */
int *array_range(int min, int max)
{
	int size, i, *m;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	m = malloc(sizeof(int) * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		m[i] = min;
		min++;
	}
	return (m);
}
