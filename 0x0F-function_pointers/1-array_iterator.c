#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: return index where match is found or -1 if fails
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
