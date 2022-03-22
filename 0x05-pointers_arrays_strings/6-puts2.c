#include "main.h"

/**
 * puts2 - prints char starting from the first char then a new line
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int a;

	a = 0;

	while (str[a])
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');

