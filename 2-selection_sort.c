#include "sort.h"

/**
 * selection_sort - function that sorts an array through selection
 * @array: array to sort
 * @size: size of the array
 * Return: Always 0
 */

void selection_sort(int *array, size_t size)
{
	int c;
	size_t a, b = 0, less = 0;

	if (!array || size < 2)
		return;

	for (a = 0; a < size - 1 ; a++)
	{
		less = a;
		b = a + 1;
		c = array[a];

		while (b < size)
		{
			if (c > array[b])
			{
				less = b;
				c = array[b];
			}
			b++;
		}
		if (less != a)
		{
			c = array[a];
			array[a] = array[less];
			array[less] = c;
			print_array(array, size);
		}
	}
}
