#include "sort.h"
/**
 * bubble_sort - order Bubble sort
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 1;
	int a = 0, flag = 1;

	while (1)
	{
		flag = 1;
		for (i = 0, j = 1; j < size; i++, j++)
		{
			if (array[j] < array[i])
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
				print_array(array, size);
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
