#include "holberton.h"
/**
 * _isdigit - Checks if the value is a number
 * Return: int 
 */
int _isdigit(int c)
{
	if((c >= 48 ) && (c <= 57))
	{
		return (1);
	}
	else

		return (0);
}
