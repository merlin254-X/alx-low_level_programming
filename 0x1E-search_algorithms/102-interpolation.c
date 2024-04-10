#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		/*Calculate the probe position using interpolation formula*/
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/*If the value is found*/
		if (array[pos] == value)
			return (pos);

		/*If the value is greater, move to the right subarray*/
		if (array[pos] < value)
			low = pos + 1;
		/*If the value is smaller, move to the left subarray*/
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", low);

	/*If the value is not found*/
	return (-1);
}
