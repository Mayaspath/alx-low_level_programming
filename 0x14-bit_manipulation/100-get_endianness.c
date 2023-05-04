#include "main.h"
/**
 * get_endianness - checks the endiannes
 * Maya 03/05/23
 *
 * Return: 0 if big indian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
