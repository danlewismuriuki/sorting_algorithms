#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	/* Iterate through the array */
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i; /* Assume the minimum element is at index i */
		/* Find the minimum element in the unsorted part of the array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		/* Swap the found minimum element with the first element */
		temp = array[min_idx];
		array[min_idx] = array[i];
		array[i] = temp;
		/* Print the array after each swap */
		print_array(array, size);
	}
}
