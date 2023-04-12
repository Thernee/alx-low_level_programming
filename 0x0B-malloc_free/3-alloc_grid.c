#include "main.h"

/**
 * alloc_grid - Creates a pointer to 2-dimensional array
 *
 * @width: width of the 2DM array
 * @height:height of the array
 * Return: Pointer to created array, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ara;
	int *block;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ara = malloc(height * sizeof(*ara) + height * width * sizeof(int));
	if (ara == NULL)
	{
		return (NULL);
	}

	block = (int *)(ara + height); /*gets data block*/

	for (i = 0; i < height; i++)
	{
		ara[i] = block + i * width; /*sets up array of pointers*/
		for (j = 0; j < width; j++)
		{
			ara[i][j] = 0;
		}
	}

	return (ara);
}

