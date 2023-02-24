#include "main.h"

/**
 * _abs - prints absolut value of n
 * @n: is an integer
 * Return: 0.
 */

int _abs(int n)
{
	int r;

	if (n < 0)
		r = n * (-1);
	return (r);
}
