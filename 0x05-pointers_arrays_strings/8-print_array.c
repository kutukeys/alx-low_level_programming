#include "main.h"
#include <stdio.h>

/**
 * print_array - prints number of arrays
 * @a: number
 * @n: number
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
