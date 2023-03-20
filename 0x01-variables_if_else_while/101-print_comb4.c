#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints possible combinations of three digits
 * Return: always 0
 */

int main(void)
{
	int n1 = 0;
	int n2, n3;

	while (n1 < 8)
	{
		n2 = n1 + 1;
		while (n2 < 9)
		{
			n3 = n2 + 1;
			while (n3 < 10)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');
				if (n1 != 7 || n2 != 8 || n3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				++n3;
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');
	return (0);
}
