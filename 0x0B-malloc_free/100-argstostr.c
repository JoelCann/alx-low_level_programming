#include <stdlib.h>
/**
 * argstostr - arguments
 * @ac: value
 * @av: value
 * Return: null
 */
char *argstostr(int ac, char **av)
{
	int maxlength = 0;

	int i, j, k;

	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i += 1)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			maxlength++;
			j += 1;
		}
		maxlength++;
	}
	result = malloc((maxlength + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i += 1)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[k] = av[i][j];
			j += 1;
			k += 1;
		}
		result[k] = '\n';
		k += 1;
	}
	result[k] = '\0';
	return (result);
}

