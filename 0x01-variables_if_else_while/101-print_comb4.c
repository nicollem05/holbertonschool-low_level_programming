#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int a1;
	int a2;

	for (a = 48; a <= 57 ; a++)
	{
		for (a1 = a + 1 ; a1 <= 57 ; a1++)
		{
			for (a2 = a1 + 1 ; a2 <= 57 ; a2++)
			{
				putchar (a);
				putchar (a1);
				putchar (a2);
				if (a == 55 && a1 == 56 && a2 == 57)
				{
					putchar ('\n');
					break;
				}
				putchar (',');
				putchar (' ');
			}
		}
	}
	return (0);
}
