#include "main.h"
/**
 * get_endianness - checks for endianness
 *
 * Return: 0 if large endian/ 1 if small  endian
 */
int get_endianness(void)
{
	uint16_t number = 0x0001;
	uint8_t *bytePointer = (uint8_t *)&number;

	if (*bytePointer == 0x01)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

