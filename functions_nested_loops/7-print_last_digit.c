#include "main.h"

/**
 * print_last_digit - prints last digit of integer
 * @n: is an integer
 * Return: 0.
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0);
		r = (n % 10) * -1;
	else
		r = (n % 10);
	_putchar(r + '0');
	return (r);
}
