#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char lcl;

		for (lcl = 'a'; lcl <= 'z'; ++lcl)
			_putchar(lcl);
		_putchar(lcl);
		++i;
	}
}
