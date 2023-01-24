#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t b = size - 1;
	int flag;
	size_t j;
	int temp;

	flag = 0;

	if (array == NULL || size < 2)
		return;

	while (flag == 0) 
	{
		flag = 1;
		for (j = 0; j < b; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 0;
			}
		}
		print_array(array, size);
		b--;
	}
}
