#include <stddef.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer
 * @n: integer
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *cur_accept = accept;

		while (*cur_accept)
		{
			if (*s == *cur_accept)
			{
				return s;
			}
			cur_accept++;
		}
		s++;
	}

	return NULL;
}

