#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints and array
 * @a: is a pointer
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int size;

	for (size = 0; size < n; size++)
	{
		if (size == n - 1)
		{
			printf("%d", a[size]);
		}
		else
		{
			printf("%d, ", a[size]);
		}
	}	printf("\n");
}
