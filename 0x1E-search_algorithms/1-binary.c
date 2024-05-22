#include "search_algos.h"
/**
 * binary_search - function that implements binary search algorithm
 * @array: pointer to an array
 * @size: size of the array
 * @value: value to be searched
 * Return: the index number if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, mid, i;

	if (!array || !value)
		return (-1);
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%i%s", array[i], i == end ? "\n" : ", ");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
