#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints possible different combinations of two digits
 * Return: always 0
 */

int main(void)
{
	int n1 = 0;
	int n2;

	while (n1 < 9)
	{
		n2 = n1 + 1;
		while (n2 <= 9)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (n1 != 8 || n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');
	return (0);
}
