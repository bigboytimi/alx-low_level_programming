#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to an two-dimensional array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL, on failure. Pointer, on success.
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
