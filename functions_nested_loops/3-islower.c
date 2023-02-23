#include "main.h"

/**
 * _islower - prints 1 if argument is lowercase
 *	      prints 0 otherwise
 * @c: is one character
 * Return: Always 0.
 */

int _islower(int c)
{
	int iTA;

	iTA = c + 32;
	if (iTA < 97)
		return (1);
	else if (iTA == 97 || iTA <= 122)
		return (0);
}
