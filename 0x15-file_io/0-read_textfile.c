#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: pointer to file
 * @letters: amount to be printed
 *
 * Return: 0 if failure
 * number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;/*descriptors*/
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	/*assign values to descriptors*/
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	/*check for error in reading and printing*/
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
