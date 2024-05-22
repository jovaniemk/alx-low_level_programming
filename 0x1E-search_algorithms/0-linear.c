#include "search_algos.h"
/**
 * linear_search - function to perform linear search in
 * an array of integers
 * @array: pointer to an array
 * @size: size of array
 * @value: value to be searched
 * Return: the index of the value if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j;

	if (!array || !value)
		return (-1);

	for (i = 0, j = 0; i < size; i++, j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (i);
		}
	}
	return (-1);
}
