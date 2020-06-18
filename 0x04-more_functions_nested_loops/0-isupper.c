#include "holberton.h"
/**
 * _isupper - Show 1 or 0 when the letter is an uppercase
 * @c: int
 * Return: int
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

		return (0);
}
