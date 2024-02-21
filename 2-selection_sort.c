#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 *
 * Description: This function sorts the given array in ascending order
 *              using the Selection sort algorithm. It iterates through
 *              the array, finds the minimum element in each iteration,
 *              and swaps it with the current element at the beginning
 *              of the unsorted subarray. The function also prints the
 *              array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	/* Check for NULL pointer or if size is less than 2 */
	if (array == NULL || size < 2)
		return;

	/* Iterate through the array */
	for (i = 0; i < size - 1; i++)
	{
		/* Assume the current index holds the minimum value */
		min_idx = i;
		/* Find the index of the minimum element in the unsorted part */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		/* If the minimum element is not at its correct position */
		if (min_idx != i)
		{
			/* Swap the current element with the minimum element */
			int temp = array[i];

			array[i] = array[min_idx];
			array[min_idx] = temp;
			/* Print the array after each swap */
			print_array(array, size);
		}
	}
}
