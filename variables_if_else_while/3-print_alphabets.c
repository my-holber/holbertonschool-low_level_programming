#include <stdio.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}

	for (abc = 'A'; abc <= 'Z'; abc++)
	{
		putchar(abc);
	}

	putchar('\n');

	return (0);
}
