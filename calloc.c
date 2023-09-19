#include <stdio.h>
#include <stdlib.h>

/**
 * calloc - call the function
 *@nmemb: name the function
 *@size: enter the size
 * Return: 0
 */
void *calloc(size_t nmemb, size_t size)
{
	int *arr1;
	size_t num_elements = 5;

	arr1 = (int *)calloc(num_elements, sizeof(int));
	if (arr1 == NULL)
	{
		fprintf(stderr, "Memory allocation failed for arr1.\n");
		return (1);
	}
	for (size_t i = 0; i < num_elements; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

/**
 * realloc - reallocate the function
 *@ptr: create a pointer
 *@size: put the size
 * Return: 0
 */
void *realloc(void *ptr, size_t size)
{
	size_t new_size = 8;
	int *arr2 = (int *)realloc(arr1, new_size * sizeof(int));

	if (arr2 == NULL)
	{
		fprintf(stderr, "Memory reallocation failed for arr2.\n");
		free(arr1);
		return (1);
	}
	for (size_t i = 0; i < new_size; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

/**
 * reallocarray - reallocate the array
 *@ptr: from the pointer
 *@nmemb: name the number
 *@size: number of size
 * Return: 0
 */
void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
	size_t new_num_elements = 10;
	int *arr3 = (int *)reallocarray(arr2, new_num_elements, sizeof(int));

	if (arr3 == NULL)
	{
		fprintf(stderr, "Memory reallocation failed for arr3.\n");
		free(arr2);
		return (1);
	}
	for (size_t i = 0; i < new_num_elements; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	free(arr3);

	return (0);
}
