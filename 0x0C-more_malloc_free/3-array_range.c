#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: minimum number to start
 * @max: maximum number to start
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *boy;
	int girl, i;

	if (min > max)
		return (NULL);

	girl = max - min;
	boy = malloc(enitan + 1) * sizeof(int));
	if (boy == NULL)
		return (NULL);

	for (i = 0; i <= enitan; i++)
		boy[i] = min++;

	return (boy);
}
