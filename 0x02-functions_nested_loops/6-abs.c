#include "holberton.h"
/**
 * _abs - Retorns an interger
 * @a: the interger
 * Return: Always 0.
 */
int _abs(int a)
{

	if (a < 0)
	{
		return (a * -1);
	}
	return (a);
}
