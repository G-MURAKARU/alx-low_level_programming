#include "main.h"

/**
 * create_file - creates a file (if non-existent) and writes to it
 * @filename: relative file path/file name
 * @text_content: content to write to file
 *
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, written_bytes, counter = 0;

	if (!filename)
		return (-1);

	fildes = open(filename, O_CREAT | O_WRONLY, 600);

	if (fildes == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (*(text_content + counter))
                counter++;

	written_bytes = write(fildes, text_content, counter);

	if (written_bytes == -1)
		return (-1);

	close(fildes);

	return (1);
}

