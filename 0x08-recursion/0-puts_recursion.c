#include "main.h"
/*
 * _puts_recursion - prints a string followed by a new line
 * @s: string
 * return : no return - Maya 06/04/2023
*/
void _puts_recursion(char *s) /* prints a string followed by a new line*/
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
