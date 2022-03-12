#include <stdio.h>

/**
 * main - Print all possible combinatiions of single digit numbers
 *
 * Return: Always return 0
 */
int main(void)
{
	int num;

<<<<<<< HEAD
	for (num = 0; num <= '9'; num++)
=======
	for (num = 0; num <= 9; num++)
>>>>>>> 16c5433c38114527a719860ecd4ccfb1880d675f
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
