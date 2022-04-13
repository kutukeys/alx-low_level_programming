#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: the array
 * @size: of the array
 * @action: a pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

