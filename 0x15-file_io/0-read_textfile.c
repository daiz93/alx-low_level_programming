#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int s, t;
	char *myCahr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	myCahr = malloc(sizeof(char) * letters);
	if (!myCahr)
		return (0);

	s = read(fd, myCahr, letters);
	if (s < 0)
	{
		free(myCahr);
		return (0);
	}
	myCahr[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, myCahr, s);
	if (t < 0)
	{
		free(myCahr);
		return (0);
	}

	free(myCahr);
	return (t);
}
