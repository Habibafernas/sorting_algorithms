#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, t;
	int x, y;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				x = array[i];
				y = array[i + 1];
				array[i] = y;
				array[i + 1] = x;
				print_array(array, size);
			}
		}
	}
}
