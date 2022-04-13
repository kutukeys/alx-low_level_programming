#include "function_pointers.h"

/**
 * print_name - function that prints the name
 * @name: the name
 * @f: argument passed
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
