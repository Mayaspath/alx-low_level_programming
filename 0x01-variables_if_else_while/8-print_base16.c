#include <stdio.h>
/**
 * main - entry point
 *
 * Desciption: prints numbers of base 16
 * Return: always 0
 */

int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		++i;
	}
	while (c <= 'f')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
