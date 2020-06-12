#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - returns me the last number and grader o less
 *Return: returns me a printf with a number
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	num = n % 10;

	if (num > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, num);
	else if (n % 10 == 0)
		printf("Last digit of %i is %i and is 0\n", n, num);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);
	return (0);
}
