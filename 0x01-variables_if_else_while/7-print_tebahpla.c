#include <stdio.h>
/**
 *main -This programm prints the alphabet backwards
 *Return: nothing
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
