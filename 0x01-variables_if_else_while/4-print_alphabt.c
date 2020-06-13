#include <stdio.h>
/**
 * main -This program returns me a list of characters except q and e
 * Return: the alphabet without q and e
 */
int main(void)
{
	char let;

	for  (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'q' && let != 'e')
		{
			putchar(let);
		}
	}

	putchar('\n');
	return (0);
}
