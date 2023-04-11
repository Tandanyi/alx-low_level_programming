#include "main.h"

/**
 * append_text_to_file - adds texts to files
 * @filename : name of file
 * @text_content : text
 *
 * Return: 1 on success
 * -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/*descriptors*/
	int o, w, len = 0;

	/*check if file is present*/
	if (!filename)
		return (-1);
	
	/*open file*/
	o = open(filename, O_RDWR | O_APPEND);
	
	/*write file*/
	if (text_content)
	{
		while(text_content[len])
			len++;
	}

	w = write(o, text_content, len);

	/*check for errors*/
	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return(1);
}
