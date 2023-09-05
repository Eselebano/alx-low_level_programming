#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - ...
  * @width: ...
  * @height: ...
  * Return: ...
  */
int **alloc_grid(int width, int height)
{
	int m, j, n, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		a[m] = malloc(sizeof(int) * width);

		if (a[m] == NULL)
		{
			for (j = m; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (l = 0; l < width; l++)
		{
			a[n][l] = 0;
		}
	}

	return (a);
}
