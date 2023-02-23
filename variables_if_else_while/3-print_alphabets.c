#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lcl;
	char ucl;

	for (lcl = 'a'; lcl <= 'z'; ++lcl)
		putchar(lcl);
	for (ucl = 'A'; ucl <= 'Z'; ++ucl)
		putchar(ucl);
	putchar('\n');
	return (0);
}
