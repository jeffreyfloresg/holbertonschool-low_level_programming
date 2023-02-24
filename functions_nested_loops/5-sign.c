#include "main.h"

/**
 * print_sign - prints + if n > 0
 *		prints 0 if n = 0
 *		prints - if n < 0
 * @n: is an integer
 * Return: 1, 0, or -1.
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
