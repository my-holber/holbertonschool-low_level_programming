#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to print.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
