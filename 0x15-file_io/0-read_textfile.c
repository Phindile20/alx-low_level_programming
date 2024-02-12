#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile -  a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: actual number of letters it could read and print
 *
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t read1, write1;
	char *buffer;

	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(a);
		return (0);
	}
	read1 = read(a, buffer, letters);
	close(a);
	if (read1 == -1)
	{
		free(buffer);
		return (0);
	}
	write1 = write(STDOUT_FILENO, buffer, read1);
	free(buffer);
	if (read1 != write1 || write1 == -1)
	{
		return (0);
	}
	return (write1);
}
