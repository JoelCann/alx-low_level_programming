#include "main.h"

/**
 * append_text_to_file - Append/ add text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to be added at end of the file
 *
 * Return: 1 if successful/ -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w_status, wrd = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[wrd] != '\0')
			wrd++;

		w_status = write(file, text_content, wrd);
		if (w_status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
