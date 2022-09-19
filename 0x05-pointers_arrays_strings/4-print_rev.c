#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	char *length = s;

	while (*length)
		length++;
	length -= 1;

	while (length)
	{
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
