#include "main.h"

/**
 * create_file - creates a file, then writes a string to it
 * @filename: name of created file
 * @text_content: the string
 *
 * Return: 1 if successful/ -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, Written_bytes, text_len = 0, mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len += 1;

		Written_bytes = write(file_d, text_content, text_len);
		if (Written_bytes != text_len)
			return (-1);
	}

	close(file_d);
	return (1);
}
