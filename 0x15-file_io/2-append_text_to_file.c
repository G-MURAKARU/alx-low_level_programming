#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: relative file path/file name
 * @text_content: text to append
 *
 * Return: 1 if successful, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	int counter;
	int written_bytes;

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (counter = 0; text_content[counter]; counter++)
			;

		written_bytes = write(fildes, text_content, counter);
		if (written_bytes == -1)
			return (-1);
	}

	close(fildes);

	return (1);
}

