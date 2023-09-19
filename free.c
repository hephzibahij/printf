#include <stdio.h>
#include <stdlib.h>

/**
 * free - free the functions
 *@ptr: create a printer
 * Return: 0
 */
void free(void *ptr)
{
	int *array;

	array = (int *)malloc(5 * sizeof(int));
	if (array == NULL)
	{
		perror("malloc");
		return (1);
	}
	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 2;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}
	free(array);
	return (0);
}
