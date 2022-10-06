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
	int *enny;
	int enitan, i;

	if (min > max)
		return (NULL);

	enitan = max - min;
	enny = malloc((enitan + 1) * sizeof(int));
	if (enny == NULL)
		return (NULL);

	for (i = 0; i <= enitan; i++)
		enny[i] = min++;

	return (enny);
}
