#include "main.h"

/**
 * Author:Abel Rop
 * read_textfile - a function that reads a text file and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: numbers of letters to be printed.
 *
 * Return: if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
