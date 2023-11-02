#include "main.h"
/**
 * Factorial-function that returns the factorial of a given number
 * @n:nbr
 * return: 1,-1,f
 */
int factorial(int n)
{
	int f;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	f = n * factorial(n - 1);
	return (f);
}
