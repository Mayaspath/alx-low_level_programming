#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabet except q and e
 * Return: always 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
