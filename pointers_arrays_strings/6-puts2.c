#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 *description:
 * Return: void
 */

void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
