#include "main.h"

/**
 * create_file - creates a file, then writes a string to it
 * @filename: name of created file
 * @text_content: the string
 *
 * Return: 1 if successful/ -1 if failed
 */
int create_file(const char *filename, const char *text_content)
{
	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	int file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc == -1)
	{
		return (-1);
	}
	ssize_t text_length = strlen(text_content);
	ssize_t written_bytes = write(file_desc, text_content, text_length);

	if (written_bytes != text_length)
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);
	return (0);
}
