#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: The array to be printed
 * @size: Number of elements in @array
 */


void selection_sort(int *array, size_t size)
{
	if (array == NULL)
	{
		return;
	}
	size_t i, j, k;
	int t;

	for (i = 0; i < size - 1; i++)
	{
		for (j = size -1, k = i + 1; j > i; j--)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (array[i] > array[k])
		{
			t = array[i];
			array[i] = array[k];
			array[k] = t;
			print_array(array, size);
		}
	}
}
