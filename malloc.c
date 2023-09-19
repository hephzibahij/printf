#include <stdio.h>

/**
 * malloc - malloc the functions
 *@size: name the size of a function
 * Return: 0
 */
void *malloc(size_t size)
{
	size_t size = 10;
	int *array;

	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		perror("malloc");
		return (1);
	}
	for (size_t i = 0; i < size; i++)
	{
		array[i] = i * 2;
	}
	for (size_t i = 0; i < size; i++)
	{
		printf("array[%zu] = %d\n", i, array[i]);
	}
	free(array);
	return (0);
}
