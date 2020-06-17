#include "holberton.h"
/**
 * times_table - Return the table of a number
 * Return: nothing
 */
void times_table(void)
{
	int num, f, mult;

	for (num = 0; num <= 9; num++)
	{
		for (f = 0; f <= 9; f++)
		{
			mult = num * f;
			if (f == 0)
			{
				_putchar(mult + '0');
			}
			else if (mult <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
