#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of args
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum;
	unsigned int q;

	sum = 0;
	va_start(valist, n);
	if (n == 0)
		return (0);
	for (q = 0; q < n; q++)
		sum += va_arg(valist, unsigned int);
	va_end(valist);
	return (sum);
}
