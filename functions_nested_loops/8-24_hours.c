#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: 0.
 */

void jack_bauer(void)
{
	int hou;
	int min;

	for (hou = 0; hou < 9; ++hou)
	{
		for (min = 0; min < 9; ++min)
		{
			_putchar('0');
			_putchar(hou);
			_putchar(':');
			_putchar('0');
			_putchar(min);
			_putchar('\n');
		}
		for (min = 10; min < 60; ++min)
		{
			_putchar('0');
			_putchar(hou);
			_putchar(':');
			_putchar(min);
			_putchar('\n');
		}
	}
	for (hou = 10; hou < 24; ++hou)
	{
		for (min = 0; min < 9; ++min)
		{
			_putchar(hou);
			_putchar(':');
			_putchar('0');
			_putchar(min);
			_putchar('\n');
		}
		for (min = 10; min < 60; ++min)
		{
			_putchar(hou);
			_putchar(':');
			_putchar(min);
			_putchar('\n');
		}
	}
		
}
