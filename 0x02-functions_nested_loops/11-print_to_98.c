#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all the natural numbers
 * @n:numbers
 * Return: 0
 */
void print_to_98(int n)
{
	int p;

	if (n > 98)
	{
		for (p = n; p > 97; p--)
		{
			printf("%d", p);

			if (p != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (p = n; p < 99; p++)
		{
			printf("%d", p);
			if (p != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");

}
