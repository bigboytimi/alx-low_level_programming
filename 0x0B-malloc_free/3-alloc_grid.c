#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return  pointer to a 2D array
 *
 * width: width/row of the array
 *
 * height: height/column of the array
 *
 * Return: if width <= 0, height <= 0, or function fails, return NULL.
 *         Otherwise, return a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **arr2d;
	int heightnum, widthnum;


	if (width <= 0 || height <= 0)
		return (NULL);

	arr2d = malloc(sizeof(int *) * height);

	if (arr2d == 0)
		return (NULL);

	for (heightnum = 0; heightnum < height; heightnum++)
	{
		arr2d[heightnum] = malloc(sizeof(int) * width);

		if (arr2d[heightnum] == NULL)
		{
			for (; heightnum >= 0; heightnum--)
				free(arr2d[heightnum]);

			free(arr2d);
			return (NULL);
		}
	}
	for (heightnum = 0; heightnum < height; heightnum++)
	{
		for (widthnum = 0; widthnum < width; widthnum++)
			arr2d[heightnum][widthnum] = 0;
	}

	return (arr2d);
}
