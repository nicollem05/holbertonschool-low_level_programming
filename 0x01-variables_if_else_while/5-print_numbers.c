#include <stdio.h>
/**
 *main -this program returns a list of digit in base 10 that stars in 0
 *and a new line
 *Return:a list
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
