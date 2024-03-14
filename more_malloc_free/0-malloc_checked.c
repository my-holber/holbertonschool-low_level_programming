#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);


	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);

}
