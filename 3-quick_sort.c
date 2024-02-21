#include <stdio.h>
#include "sort.h"

/* Function prototypes */
void quick_sort(int *array, size_t size);
int lomuto_partition(int *array, int low, int high, size_t size);
void swap(int *a, int *b);

/**
 * quick_sort - Sorts an array of integers in ascending
 *     order using the Quick sort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 *
 * Description: This function sorts the given
 *     array in ascending order
 *              using the Quick sort algorithm with
 *                  the Lomuto partition scheme.
 *              It selects the last element of
 *                  the array as the pivot,
 *              partitions the array around the
 *                  pivot, and recursively sorts
 *              the subarrays. It also prints the array after
 *                  each time it swaps two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	/* Call the recursive quicksort function */
	lomuto_partition(array, 0, size - 1, size);
}
/**
 * lomuto_partition - Partitions the array around a
 *     pivot element using Lomuto scheme
 * @array: The array to be partitioned
 * @low: The index of the first element of the subarray
 * @high: The index of the last element of the subarray
 * @size: Size of the array
 *
 * Return: The index of the pivot element after partitioning
 *
 * Description: This function selects the last element of the
 *              subarray as the pivot,
 *              partitions the subarray such that all
 *              elements less than the pivot
 *              are on its left and all elements greater than or equal
 *              to the pivot are on its right. It also
 *              prints the array after
 *                  each time it swaps two elements.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}
/**
 * swap - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function swaps the values of two integers
 *              pointed to by the given pointers.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
