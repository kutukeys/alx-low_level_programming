#include <stdio.h>

/**
 * main - Print all possible combinatiions of single digit numbers
 *
 * Return: Always return 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)

	{
	putchar(num + 0);
	if (num < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	
	return (0);
}
