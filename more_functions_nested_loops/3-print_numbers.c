#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; ++i)
		_putchar(i);
	_putchar('\n');
}
