#include "sort.h"
/**
 * quick_sort_sup - recursion
 * @array: array
 * @size: size
 * @init: init
 * @end: end
 */
void quick_sort_sup(int *array, size_t size, int init, int end)
{
	int pivot = 0, izq = 0, der = 0, tmp = 0, med = 0;
	int flag = 1;

	if (init < end)
	{
		pivot = end;
		izq = init;
		der = init;
		while (der < pivot)
		{
			if (array[der] <= array[pivot])
			{
				tmp = array[der];
				array[der] = array[izq];
				array[izq] = tmp;
				if (der != izq)
					print_array(array, size);
				izq++;
				flag = 0;
			}
			der++;
		}
		if (flag == 1 && der == pivot)
		{
			tmp = array[izq];
			array[izq] = array[pivot];
			array[pivot] = tmp;
			print_array(array, size);
		}
		med = izq;
		if (flag == 0)
			quick_sort_sup(array, size, med, end);
		else
		quick_sort_sup(array, size, med + 1, end);
			quick_sort_sup(array, size, init, med - 1);
	}
}
/**
 * quick_sort - quick sort
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	int end = size - 1, init = 0;

	if (array == NULL || size < 2)
		return;
	quick_sort_sup(array, size, init, end);
}
