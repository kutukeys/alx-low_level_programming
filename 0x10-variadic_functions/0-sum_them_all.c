#include "variadic_functions"
#include <stdarg.h>

/**
 * sum_them_all - a functionthat sums all its parameters
 * @n: argument passed
 * @...: ellipsis passed in argument
 * Return: 0 if n == 0 && sum all
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
