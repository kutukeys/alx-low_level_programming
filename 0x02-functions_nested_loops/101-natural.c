#include <stdio.h>

/**
 * main - computes and prints sum of all multiples
 * Return: always 0
 */

int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}

	printf("%i\n", sum);

	return (0);
}

