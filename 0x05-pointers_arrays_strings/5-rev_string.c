#include "holberton.h"
/**
 * rev_string - a funtion that reverse a string
 * @s: a pointer
 * Return: zero
 */
void rev_string(char *s)
{
	int a;
	int b;
	int x;
	char p;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	for (x = 0, b = a - 1; x < b; x++, b--)
	{
		p = s[x];
		s[x] = s[b];
		 s[b] = p;
	}
}
