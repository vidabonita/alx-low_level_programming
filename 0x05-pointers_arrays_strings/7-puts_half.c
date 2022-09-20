#include "main.h"

/**
 * puts_half - a functiin that ptints half of a string
 * @str: the string itself
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
