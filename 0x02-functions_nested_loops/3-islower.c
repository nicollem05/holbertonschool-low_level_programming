#include "holberton.h"
/**
 * _islower - This programm show when a chracter is a lowercase
 * @c: the number to be checked
 * Return: returns zero
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);	
	}

	return (0);
}
