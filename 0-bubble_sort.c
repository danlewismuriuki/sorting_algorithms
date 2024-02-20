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
	/*check if rray is NULL or size is less than 2*/
	if (array == NULL || size < 2)
		return;

	/*Iterate through the array*/
	for (i = 0; i < size - 1; i++)
	{
		swapped_nums = 0;/*Flag to check if any swap is performed*/
		/*Iterate through the array untill the end*/
		for (j = 0; j < size - i - 1; j++)
		{
			/*If the current elemnet is greater than the next element*/
			if (array[j] > array[j + 1])
			{
				/*Swap elements*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped_nums = 1;/*Set the flag*/
				/*Print the array after each swap*/
				print_array(array, size);
			}
		}
		/*If no swap is performed in the inner loop, array is already sorted*/
		if (swapped_nums == 0)
			break;
	}
}
