#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabet in reverse
 * Return: always 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		--c;
	}
	putchar('\n');
	return (0);
}
