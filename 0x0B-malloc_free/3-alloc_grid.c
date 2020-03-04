#include "holberton.h"
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: var
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **var;/**pointer to a pointer*/

if (width <= 0 || height <= 0)/**requirement*/
{
return (NULL);
}
var = malloc(height * sizeof(int *));
if (var == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
var[i] = malloc(sizeof(int) * width);
if (var[i] == NULL)
{
free(var);/*free memory*/
for (j = 0; j <= i; j++)
free(var[j]);
return (NULL);
}
else
{
for (j = 0; j < width; j++)
{
var[i][j] = 0;
}
}
}
return (var);
free(var);
}
