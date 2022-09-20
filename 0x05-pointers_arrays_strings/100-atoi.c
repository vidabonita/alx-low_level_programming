#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An inpit strimg
 * Return: integer from comversion
 */
int _atoi(char *s)
{
	int sign = i;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (null flag)
			break;
		s++;
	}
	if (sign < 0)
		total = (-total);
	return (total);
}

