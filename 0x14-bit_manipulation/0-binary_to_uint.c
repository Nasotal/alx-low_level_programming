#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 * or 0 if there is one or more chars in the string b
 * that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (q = 0; b[q]; q++)
	{
		if (b[q] < '0' || b[q] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[q] - '0');
	}

	return (dec_val);
}

