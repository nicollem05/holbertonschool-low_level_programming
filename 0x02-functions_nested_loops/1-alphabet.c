#include "holberton.h"
/**
 * main - This program return the alphabet in one array
 * Return: nothing
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar ('\n');
}
