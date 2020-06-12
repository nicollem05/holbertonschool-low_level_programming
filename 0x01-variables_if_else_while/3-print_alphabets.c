#include <stdio.h>
/**
 *main - this programm show the alpabhet in min and may
 *Return: nothing
 */
int main(void)
{
	char let1;
	char let2;

	for (let1 = ('a'); let1 <= ('z'); let1++)
	{
		putchar(let1);
	}
	for (let2 = ('A'); let2 <= ('Z'); let2++)
	{
		putchar(let2);
	}
	{
	putchar('\n');
	return (0);
	}
}
