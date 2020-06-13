#include <stdio.h>
/**
 * main - This program returns a list of numbers 0-100
 * Return: nothing
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(' ');
			putchar(',');
		}
	}
		return(0);
}

