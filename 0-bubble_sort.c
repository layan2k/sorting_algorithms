#include "sort.h"

/**
 * bubble_sort - is a simple sorting algorithm.
 * This sorting algorithm is comparison-based algorithm in which each pair
 * of adjacent elements is compared and the elements are swapped if they are not in order.
 *
 * @array: input array.
 * @size: size of the array.
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp, exchange;

	for (n = size, exchange = 1; n > 0 && exchange; n--)
	{
		exchange = 0;
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				exchange = 1;
			}
		}
	}
}
