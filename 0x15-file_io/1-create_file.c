#include "main.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, status1, i;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		status1 = write(a, text_content, i);
		if (status1 == -1)
			return (-1);
	}

	close(a);
	return (1);
}
