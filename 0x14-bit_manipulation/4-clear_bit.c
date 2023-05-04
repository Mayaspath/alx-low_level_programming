#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Maya 03/05/23
 *
 * Return: 1 if it worked -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
