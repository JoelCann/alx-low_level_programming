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
	ssize_t read_bytes, bytes_written;

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
	read_bytes = fread(buffer, sizeof(char), letters, fp);
	if (read_bytes <= 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	bytes_written = fwrite(buffer, sizeof(char), read_bytes, stdout);
	if (bytes_written != read_bytes)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (read_bytes);
}
