#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n: number to return
 * Return: last digit
 */

int print_last_digit(int n)
{
	int val;

	if (n < 0)
		val = -1 * (n % 10);
	else
		val = n % 10;
	_putchar(val + '0');

	return (val);
}
