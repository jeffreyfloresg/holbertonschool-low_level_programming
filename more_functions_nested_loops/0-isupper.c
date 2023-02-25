#include "main.h"

/**
 * _isupper - checks if c is uppercase char.
 * @c: is a character
 * Return: 1 if c is uppercase,
 * 	   0 if it is not uppercase.
 */

int _isupper(char c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
