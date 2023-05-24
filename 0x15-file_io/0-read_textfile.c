#include "main.h"
/**
 * read_textfile - reads aand print a text fileto standard output.
 * @filename: name of the file to be read
 * @letters: no. of letters to be read
 *
 * Return: no. of letters read and printed to standard output/ 0
 * if file can't be read or opened/ write fails to write
 * expected no. of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, fp);
	if (bytes_read <= 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	if (bytes_written != bytes_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (bytes_read);
}
