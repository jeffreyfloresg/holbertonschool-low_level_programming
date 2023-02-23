#include "main.h"

/**
 * print_alphabet - this will print the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char lcl;

	for (lcl = 'a'; lcl <= 'z'; ++lcl)
		_putchar(lcl);
	_putchar('\n');
}
