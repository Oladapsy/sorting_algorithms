#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <stdbool.h>

/**
 * swap - a function that sqwaps two int in an array
 * @a: the first integer to swap
 * @b: the second integer to swap
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - a function that sorts an array of ints
 * in ascending order using the bubblesort algorithm
 *
 * @array: the array to sort
 * @size: the positive size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;

		for (i = 0; i < len; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len--;
	}
}
