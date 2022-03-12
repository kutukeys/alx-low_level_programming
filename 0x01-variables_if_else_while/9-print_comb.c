#include <stdio.h>

/**
 * main - Print all possible combinatiions of single digit numbers
 *
 * Return: Always return 0
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	return (0);
}
