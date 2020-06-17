#include "holberton.h"
/**
 * main - This program return "Holberton"
 * Return: nothing
 */
int main(void)
{
	char holberton[] = "Holberton";
	int cont;

	for (cont = 0; cont < 9; cont++)
	{
		_putchar(holberton[cont]);

	}
	_putchar('\n');
	return (0);
}
