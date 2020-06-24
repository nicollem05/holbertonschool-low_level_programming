#include "holberton.h"
/**
 * puts_half - returns me a half of the array
 * @str: is a pointer
 * Return: zero
 */
void puts_half(char *str)
{
	int size;
	int i;

	for (size = 0; str[size]; size++)
	{
	
	}
	size = size + 1;

	for (i = size / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
