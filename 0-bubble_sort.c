#include <stdio.h>
#include "sort.h"
void bubble_sort(int *array, size_t size)
{

	unsigned int a, b, c;
	for (a = 0; a < size-1; a++)

		for (b = 0; b < size-1; b++)
			if (array[b] > array[b+1])
			{
				c = array[b];
				array[b] = array[b + 1];
				array[b + 1] = c;
				print_array(array, size);
			}
}
