#include "main.h"
/**
 * *_strcat - function that concatenate two strings
 * @dest: string concat destination
 * @src: string concat source
 * Return: pointer to the outputed string
 */

char *_strcat(char *dest, char *src)

	int len = 0, i = 0;

	while (dest[len])
	{
		len++;
	}
	while (src[i])
	{
		dest[len++] = src[i];
		i++;
	}
	return (dest);
}
