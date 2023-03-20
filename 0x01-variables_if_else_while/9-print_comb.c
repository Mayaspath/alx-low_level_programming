#include <stdio.h>
/**
 * main - entry point
 *
 * Desciption: prints all possible combinations
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		++i;
		if (i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
