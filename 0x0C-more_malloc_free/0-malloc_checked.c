#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: amount of bytes - Maya 14/04/23
 *
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
