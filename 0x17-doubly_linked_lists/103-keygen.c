#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generates a key depending on a username for crackme5
 * @argc: no. of arguments
 * @argv: arguments
 *
 * Return: 0 if success/ 1 if error
 */
int main(int argc, char *argv[])
{
	unsigned int a, x;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (a = 0, add = 0; a < len; a += 1)
		add += argv[1][a];
	p[1] = l[(add ^ 79) & 63];
	for (a = 0, x = 1; a < len; a += 1)
		x *= argv[1][a];
	p[2] = l[(x ^ 85) & 63];
	for (b = argv[1][0], a = 0; a < len; a += 1)
		if ((char)x <= argv[1][a])
			x = argv[1][a];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (x = 0, a = 0; a < len; a += 1)
		x += argv[1][a] * argv[1][a];
	p[4] = l[(x ^ 239) & 63];
	for (x = 0, a = 0; (char)a < argv[1][0]; a++)
		x = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
