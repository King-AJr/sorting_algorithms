#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t b = size - 1;
	size_t i;
	size_t j;
	int temp;

	for (i = 0; i < size; i++)
	{
		int flag = 0;
		for (j = 0; j < b; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
			}
		}
		print_array(array, size);
		if (flag == 0)
			break;
	}
}
