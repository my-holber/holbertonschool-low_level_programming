#include "main.h"

/**
 * more_numbers - function that more numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int b;

	for (i = 0 ; i < 10 ; i++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b >= 10)

				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
