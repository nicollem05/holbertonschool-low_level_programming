#include <stdio.h>
/**
 *main -this program return a list of digits in base 10 that stars in 0
 *and a new line
 *Return: a lis of characters
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
