#include "sort.h"
/**
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t j = 0, k = 0;
	int tmp = 0, flag = 0, pos = 0;

	for(j = 0; j < size; j++)
	{
		tmp = array[j];
		for(j = j, k = j + 1; k < size; k++)
		{	
			if(array[k] < tmp)
			{
				tmp = array[k];
				pos = k;
				flag = 1;
			}
		}
		if(flag == 1)
		{
			array[pos] = array[j];
			array[j] = tmp;
			print_array(array, size);
			flag = 0;
		}
	}
}
