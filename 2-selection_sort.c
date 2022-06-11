#include "sort.h"
/**
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, k = 0;
	int tmp = 0, flag = 0;

	for(j = 0; j < size; i++)
	{
		for(j = j, k = 1; array[j]; k++)
		{
			if((array[k] < array [j]) && flag == 0)
			{
				tmp = array[k];
				i = k;
				array[k] = array[j];
				array[j] = tmp;
				flag = 1;
			}
			if((array[k] < array [tmp]) && flag == 1)
			{
				array[i] = array[k];
				array[k] = tmp;
				i = k;
			}
		}
	}
}
