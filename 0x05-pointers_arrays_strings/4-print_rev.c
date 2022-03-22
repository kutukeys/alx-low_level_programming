#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: argument passed
 * Return: void
 */

void print_rev(char *s)
{
	int val = 0;

	while (s[val])
		val++;
	while (val--)
	{
		_putchar(s[val]);
	}
	_putchar('\n');
}
