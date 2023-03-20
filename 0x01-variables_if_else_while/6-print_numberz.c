#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints digits of base 10 with no char or printf
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
