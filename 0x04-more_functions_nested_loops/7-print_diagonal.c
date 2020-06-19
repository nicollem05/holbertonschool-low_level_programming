#include "holberton.h"
/**
 * print_diagonal - return a number of "\"
 * @n: num
 * Return: zero
 */
void print_diagonal(int n)
{
	int p;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		p = 1;
		while (p <= n)
		{
			j = 2;
			while (j < p + 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			p++;
		}
	}
}
