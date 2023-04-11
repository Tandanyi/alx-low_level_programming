#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_cintent: content to be written
 *
 * Return: 1 if success
 * -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, w, len = 0;

	/*check for filename*/
	if (!filename)
		return(-1);

	/*create and open file, if exists truncate*/
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	
	/*check for errors when opening*/
	if (f == -1)
		return (-1);

	/*write to file*/
	if (text_content)
	{
		while (text_content[len] != 0)
			len++;

		w = write(f, text_content, len);

		if (w == -1)
			return (-1);

	}
	close(f);
	return (1);

}
