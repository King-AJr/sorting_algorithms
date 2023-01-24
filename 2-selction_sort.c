#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts out an array using the selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, imin;
	int temp;

	for (i = 0; i <= (size - 1); i++)
	{
		imin = i;
		for (j = (i + 1); j < size; j++)
		{
			printf("%d ",array[j]);
			if (array[j] < array[imin])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
