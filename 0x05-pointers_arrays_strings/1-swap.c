#include "main.h"

/**
 * swap_int - that swaps two integer
 * @a : an integer
 * @b : another integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
