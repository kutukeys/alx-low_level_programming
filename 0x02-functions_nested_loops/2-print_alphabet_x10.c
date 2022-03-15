#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int letter = 'a', l = 0;

	while (l < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		letter = 'a';

		_putchar('\n');
		l++;
	}
}

