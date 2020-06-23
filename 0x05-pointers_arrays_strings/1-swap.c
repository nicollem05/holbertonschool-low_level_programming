#include "holberton.h"
/**
  * swap_int - Write a function that swaps the values of two integers
  * @a: a pointer
  * @b: a pointer
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
