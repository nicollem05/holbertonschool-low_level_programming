#include "holberton.h"
/**
  * print_numbers - print the numbers from 0 at 9
  * Return: void
  */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
