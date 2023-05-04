#include "main.h"
/**
 * set_bit - sets value of bit to 1 at index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Maya 05/03/23
 *
 * Return: 1 if it worked, -1 if it didn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
