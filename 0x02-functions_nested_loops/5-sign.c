#include "main.h"

/**
 * print_sign - that prints sign of a number
 * @n: the input number
 * Return: 1 if greater than 0,  0 if zero and -1 if less than
 */

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (n == 0)
	{
		_putchar(0);
		val = 0;
	}
	else
	{
		_putchar('-');
		val = -1;
	}
	return (val);
}
