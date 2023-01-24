#include "sort.h"

/**
 * selection_sort - sorts out an array using the selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;

	size_t i, j, imin;
	int temp;

	for (i = 0; i < size; i++)
	{
		imin = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[imin])
			{
				temp = array[imin];
				array[imin] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
