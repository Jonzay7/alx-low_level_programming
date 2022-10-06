#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Enitan_John;
	unsigned int i = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	Enitan_John = malloc(lens1 + n + 1);

	if (Enitan_John == NULL)
		return (NULL);

	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			Enitan_John[i] = *s1, s1++;
		else
			Enitan_John[i] = *s2, s2++;
	}
	Enitan_John[i] = '\0';
	return (Enitan_John);
}
