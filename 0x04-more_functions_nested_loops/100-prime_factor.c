#include <stdio.h>
/**
 * main -  checks for checks for a digit (0 to 9).
 * Return: nothing
 */
int main(void)
{
	long a, b;

	a = 612852475143;

	for (b = 2; a > b; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%lu", b);
	putchar('\n');
	return (0);
}
