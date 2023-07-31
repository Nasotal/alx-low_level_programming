#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - a function that prints anything..
 *@format: a list of types of arguments passed to the function.
 *Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int q = 0, i, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[q])
	{
		i = 0;
		while (t_arg[i])
		{
			if (format[q] == t_arg[i] && c)
			{
				printf(", ");
				break;
			} i++;
		}
		switch (format[q])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'a':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} q++;
	}
	printf("\n"), va_end(valist);
}
