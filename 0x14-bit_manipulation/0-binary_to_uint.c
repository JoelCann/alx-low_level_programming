#include "main.h"
/**
 * binary_to_uint - converts binary numbers  to an unsigned integers
 * @b: string of binary numbers.
 *
 * Return: unsigned integer equivalent of string b, or 0 if b is
 * Null/ invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;

	if (!b)
		return (0);
	for (; *b != '\0'; b += 1)
	{
		if (*b != '0' && *b != '1')
			return (0);
		answer = answer << 1;
		if (*b == '1')
			answer += 1;
	}
	return (answer);
}
