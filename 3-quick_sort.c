#include "sort.h"
/**
 *
 *
 */
void quick_sort(int *array, size_t size)
{
	int pivot = 0, i = 0, j = size - 1;
	size_t tmp = 0, k = 0, l =0;
	
	pivot = rand() % size;
	
	while(i != j)
	{
		if(array[i] > array[pivot] && array[j] < array[pivot])
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++, j--;
			print_array(array, size);
		}
		else if(array[i] > array[pivot] && array[j] > array[pivot])
			j--;
		else if(array[i] < array[pivot] && array[j] < array[pivot])
			i++;
		else
			break;
	}
	for (k = 0, l = 1; l < size; k++, l++)
	{
		if(array[l] < array[k])
		{
			printf("hellooooooo");
			quick_sort(array, size);
		}
	}
}
