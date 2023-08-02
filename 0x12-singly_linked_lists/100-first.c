#include <stdio.h>

void __attribute__((constructor)) prev(void);

/**
 * prev - a function that prints a string before the
 * main function is executed.
 */
void bfor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
