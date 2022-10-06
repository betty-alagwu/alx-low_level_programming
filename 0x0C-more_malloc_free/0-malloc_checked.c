#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
