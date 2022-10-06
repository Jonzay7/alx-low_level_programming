#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */

void *malloc_checked(unsigned int b)
{

	int *Enitan;

	Enitan = malloc(b);

	if (Enitan == NULL)
		exit(98);

	return (Enitan);
}
