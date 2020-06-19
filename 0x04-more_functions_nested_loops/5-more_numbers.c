#include "holberton.h"
/**
 * more_numbers - Retur 10 lines with the numbers fro 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int n;
	int f;

	for (f = 0; f <= 9; f++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
