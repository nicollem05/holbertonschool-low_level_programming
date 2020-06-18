#include "holberton.h"
/**
  * print_most_numbers - print the number to 0 from 9 and a new line
  * Return:
  */
void print_most_numbers(void)
{
	int i;

	for(i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && (i != '4'))

		_putchar(i);
		
	}
		_putchar('\n');
}
