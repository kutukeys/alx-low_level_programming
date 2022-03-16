#include "main.h"

/**
 * largest_number - prints the largest of three numbers
 *
 * @a: firstn integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	int larg;

	if (a >= b && a >= c)
	{
		larg = a;
	}
	else if (b >= a && b >= c)
	{
		larg = b;
	}
	else
	{
		larg = c;
	}

	return (largest);
}
