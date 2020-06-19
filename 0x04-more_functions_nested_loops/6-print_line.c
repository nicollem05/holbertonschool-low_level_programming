#include "holberton.h"
/**
 * print_line - make a link 
 * @p: a number
 * Return: void
 */
void print_line(int n)
{
	int p=0;

	while(p <= n)
	{
		_putchar('_');
		p++;
	}
	_putchar('\n');
}
