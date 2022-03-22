#include "main.h"

/**
 * _strlen - functions that returns length of a string
 * @s: argumrnt passed
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}
