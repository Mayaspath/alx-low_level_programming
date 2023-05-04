#include "main.h"
/**
 * print_binary - prints binary representation
 * of number
 * @n: unsigned long int
 * Maya 03/05/23
 *
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
