#include "holberton.h"
/**
 * _isalpha - return 1 or 0
 * @c: the value for the letter
 * Return: return a zero
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' &&  c <= 'z'))
	{
		return (1);
	}
	return (0);
}
