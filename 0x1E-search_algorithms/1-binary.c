#include "search_algos.h"

/**
 * printer - Prints an array
 * @array: Target array
 * @left: Left index of @array
 * @right: Right index of @array
 */
void printer(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i == right)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - .
 * Binary search algorithm
 * @array: .
 * @size: .
 * @value: .
 *
 * Return: .
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right;
	size_t left;
	size_t mid;

	if (!array || size == 0)
		return (-1);

	left = 0;
	right = size - 1;
	mid = (left + right) / 2;
	while (1)
	{
		printer(array, left, right);

		if (array[mid] == value)
			return (mid);
		if (mid == 0 || mid == size - 1)
			return (-1);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;

		mid = (right + left) / 2;
	}

	return (-1);
}
