#include "main.h"

/*Thank to Ivy1610, for explications. */
/**
 * print_binary - Prints the binary representation of a number
 * @n: Number
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
