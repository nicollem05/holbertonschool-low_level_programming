#include "holberton.h"
/**
  * _puts -prints a string followed by a line
  * @str: this is a pointer
  * Return: 0
  */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
