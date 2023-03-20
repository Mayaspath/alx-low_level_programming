#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabet in lower and uppercase
 * Return: always 0
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	while (C <= 'Z')
	{
		putchar(C);
		++C;
	}
	putchar('\n');
	return (0);
}
