#include <stdio.h>
/**
 * main - This programm returns a list of numbers in base 16
 * Return: nothing
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	for (l = 'a'; n < 'g'; l++)
	{
		putchar(l);
	}
	putchar ('\n');
	return (0);
}
