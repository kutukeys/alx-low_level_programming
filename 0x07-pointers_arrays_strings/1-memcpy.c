#include "main.h"

/**
 * *_memcpy - functions that copies the memory area
 * @dest: the destination
 * @src: the source
 * @n: length of source
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
