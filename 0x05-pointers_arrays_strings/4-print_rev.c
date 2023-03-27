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
	int le = 0, in;

	while (s[in++])
		le++;

	for (in = le - 1; in >= 0; in--)
		_putchar(s[in]);

	_putchar('\n');
}
