#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_written;
	char *buffer;
	FILE *fp;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	n_read = fread(buffer, sizeof(char), letters, fp);
	n_written = fwrite(buffer, sizeof(char), n_read, stdout);

	free(buffer);
	fclose(fp);

	return (n_written);
}
