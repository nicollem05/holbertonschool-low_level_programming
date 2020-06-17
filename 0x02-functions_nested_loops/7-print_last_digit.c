#include "holberton.h"
/**
 * print_last_digit - prints the last digits
 * @a:the digit
 * Return: nothing
 */
int print_last_digit(int a)
{
	int c;

	c = (a % 10);

	if (a < 0)
	{
		c = (c * -1);
	}
	_putchar(c + '0');
	return (c);
}
