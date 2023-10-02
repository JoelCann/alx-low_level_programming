/**
 * hash_djb2 - a function to compute the hash of 'str' using djb2
 * @str: the string to hash
 *
 * Return: value of hash in 64 bits 
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int b;

	hash = 5381;
	while ((b = *str++))
	{
		hash = ((hash << 5) + hash) + b; /* hash * 33 + b */
	}
	return (hash);
}

