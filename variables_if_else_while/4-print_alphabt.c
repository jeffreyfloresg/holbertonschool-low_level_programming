#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lcl;

	for (lcl = 'a'; lcl <= 'z'; ++lcl)
	{
		if (lcl != 'e' && lcl != 'q')
			putchar(lcl);
	}
	putchar('\n');
	return (0);
}
