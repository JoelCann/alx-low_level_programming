#include "main.h"

#define BUF_SIZE 1024

/**
 * main - main function for cp program
 * @argc: no. of arguments passed to the program
 * @argv: array of strings containing arguments for the program
 *
 * Return: 0 if successful/ an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fdFrom, fdTo, read_bytes, written_bytes;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fdTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fdTo == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		read_bytes = read(fdFrom, buf, BUF_SIZE);
		if (read_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

		written_bytes = write(fdTo, buf, read_bytes);
		if (written_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	} while (read_bytes == BUF_SIZE);

	if (close(fdFrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom), exit(100);

	if (close(fdTo) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdTo), exit(100);

	return (0);
}
