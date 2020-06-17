#include "holberton.h"
/**
 * print_alphabet_x10 - write 10 time the alphabet
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int cont;
	char letter;

	for (cont = 0; cont <= 9; cont++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
			_putchar('\n');
	}
}
