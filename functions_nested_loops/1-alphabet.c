#include "main.h"
/**
 * * main -  a function that prints the alphabet, in lowercase, followed by a new line.
 * * Return: Always 0 (Success)
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

int main()
{
	print_alphabet();
	return (0);
}
