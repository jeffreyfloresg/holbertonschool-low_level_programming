#include <stdio.h>

/**
 * print_to_98 - prints every number from n to 98
 * @n: is an integer
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; ++n)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("\n");
		if (n == 98)
			printf("%d", n);
	}
	else if (n > 98)
	{
		for (; n >= 98; --n)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("\n")
	}
}
