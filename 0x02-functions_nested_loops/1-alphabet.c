#include "main.h"

/**
 * printalphabet - check the code
 *
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
