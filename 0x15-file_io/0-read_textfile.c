#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- write a function that
 * Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fd);
	return (a);
}
