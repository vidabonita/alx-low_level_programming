#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a given string
 * @s: the string itself
 * Return: return the length of a string
 */
int  _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
        	i++;
	return (i);
}

/**
 * rev_string - a function to reverse a string
 * @s: the string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, l;
	char v, d;

	l = _strlen(s) - 1;
 	i = 0;
	while (i < l)
	{
	    v = s[i];
	    d = s[l];
            s[i++] = d;
            s[l--] = v;
	}
}	
