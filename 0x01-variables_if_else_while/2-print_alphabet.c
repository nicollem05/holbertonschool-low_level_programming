#include <stdio.h>
/**
 *main - this programm prints the alfabeth
 *Return: nothing
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
