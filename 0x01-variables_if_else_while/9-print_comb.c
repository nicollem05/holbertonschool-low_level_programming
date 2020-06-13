#include <stdio.h>
/**
 * main - this program returns a list of combinations
 * Return: nothing
 */
int main(void)
{
	int n1;

	for (n1 = 0; n1 < 10; n1++)
	{
		putchar(n1 + '0');
		if (n1 !=9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
