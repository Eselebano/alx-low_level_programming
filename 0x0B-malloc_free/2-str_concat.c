#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int b = 0, j = 0, k = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[b])
		b++;

	while (s2[j])
		j++;

	c = b + j;
	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < c)
	{
		if (k <= b)
			s[k] = s1[k];

		if (k >= b)
		{
			s[k] = s2[j];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
