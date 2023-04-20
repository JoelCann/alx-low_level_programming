#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: no. of arguments
 * @argv: argument for vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *p += 1, b ? " " : "\n");
	return (0);
}
