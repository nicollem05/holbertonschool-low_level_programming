#include "holberton.h"
/**
  * wap_int - changes the values for two intergers
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
