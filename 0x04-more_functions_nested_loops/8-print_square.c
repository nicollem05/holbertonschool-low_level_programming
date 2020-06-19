#include "holberton.h"
/**
  * print_square - square
  * @size: num
  * Return: zero
  */

void print_square(int size)
{
	int p;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		p = 0;
		while (p < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
			p++;
		}
	}
}
