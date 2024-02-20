#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	arr = n % 10;

	if (arr > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, arr);
	}
	else if (arr == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, arr);
	}
	else if (arr < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, arr);
	}

	return (0);
}
