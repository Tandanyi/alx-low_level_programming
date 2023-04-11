#include "main.h"
#define SIZE 1024

/**
 * main - copies a file
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	/*descriptors*/
	int f_in, r, c_in; /*source*/
	int f_out, w, c_out; /*destination*/
	char buffer[SIZE];

	/*checks for arguments*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	/*open files*/
	f_in = open(argv[1], O_RDONLY);
	f_out = open(argv[2], O_WRONLY | O_TRUNC, 0664);

	/*read file*/
	r = read(f_in, buffer, SIZE);
	
	if (f_in == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/*copy file*/
		w = write(f_out, buffer, r);
		if (f_out == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[3]);
			exit(98);
		}
	
	/*close files*/
	c_in = close(f_in);
	c_out = close(f_out);

	/*error*/
	if (c_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_in);
		exit(100);
	}
	if (c_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", f_out);
		exit(100);
	}
	return (0);
}
