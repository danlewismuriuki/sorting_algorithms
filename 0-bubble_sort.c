#include "sort.h"

/**
 * bubble_sort - function to sort the array
 * @array: This is a pointer to the list of nums
 * @size: This is the length of the array
 */

void bubble_sort(int *array, size_t size)
{
	int swapped_nums;
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped_nums = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped_nums = 1;
				print_array(array, size);
			}
		}
		if (swapped_nums == 0)
			break;
	}
}
