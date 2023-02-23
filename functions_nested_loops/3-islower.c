#include "main.h"

/**
 * _islower - prints 1 if argument is lowercase
 *	      prints 0 otherwise
 * @c: is one character
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
