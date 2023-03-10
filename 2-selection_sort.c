#include "sort.h"

/**
 * selection_sort - sorts out an array using the selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	size_t i, imin, j;
	
	int temp;
	if (size < 2 || array == NULL)
		return;


	for (i = 0; i < size; i++)
	{
		imin = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[imin])
			{
				imin = j;
			}
		}
		if (array[i] != array[imin])
		{
			temp = array[imin];
			array[imin] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
