#include "main.h"

/*
 * task 4
 */

/**
 * print_rev - reverse printing a srring
 * @s: the string
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
