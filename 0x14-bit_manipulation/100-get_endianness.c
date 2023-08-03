#include "main.h"

/**
 * get_endianness - checks if a computer = little / big endian
 * Return: 0 fr large, 1 fr little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
