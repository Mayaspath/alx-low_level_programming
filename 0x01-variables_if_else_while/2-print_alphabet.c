#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabet in lowercase
 * Return: always 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}

