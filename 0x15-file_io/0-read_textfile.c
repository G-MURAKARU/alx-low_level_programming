#include "main.h"

/**
 * read_textfile - reads the contents of a text file, prints to stdout
 * @filename: name of text file to read
 * @letters: number of letters (bytes) to print
 *
 * Return: number of read and printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *char_buffer;
	int read_letter_count;
	int write_letter_count;

	if (!filename)
		return (0);

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);

	char_buffer = malloc(sizeof(char) * letters);
	if (!char_buffer)
		return (0);

	read_letter_count = read(fildes, char_buffer, letters);

	write_letter_count = write(1, char_buffer, read_letter_count);

	close(fildes);
	free(char_buffer);

	return (write_letter_count);
}

