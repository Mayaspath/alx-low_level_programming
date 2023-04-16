#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * Maya 15/04/23
 * @argc: number of command line arguments
 * @argv: array that contains the program command line argument.
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
