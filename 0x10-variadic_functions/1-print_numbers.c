#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - a function that prints numbers
 *followed by a new line.
 *@separator: string to be printed between numbers
 *@n: num of integers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int q;

	va_start(valist, n);
	for (q = 0; q < n; q++)
	{
		if (q != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(valist, unsigned int), separator);
		else
			printf("%d", va_arg(valist, unsigned int));
	}
	printf("\n");
	va_end(valist);
}
