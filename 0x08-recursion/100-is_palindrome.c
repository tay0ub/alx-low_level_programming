#include "main.h"

/*
 * task 7
 */

int _length(int y, char *s);

/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not
 * @s: the string
 * Return: 1 if palindrome , 0 if not
 */

int is_palindrome(char *s)

{
	int len;

	len = _length(0, s);

	if (*s == 0)
		return (1);

	else
		return (_string(s, 0, len));
}

/**
 * _string - check if the str is palindrome
 * @s: the string
 * @x: int
 * @len: length
 * Return: 0 or 1
 */

int _string(char *s, int x, int len)

{
	if (x == len)
		return (1);

	else

	{
		if (s[x] == s[len])
			return (_string(s, x + 1, len - 1));
	}

	return (0);
}

/**
 * _lenght - calcule the length
 * @s: the string
 * @y: int
 * Return: int
 */

int _length(int y, char *s)

{
	if (s[y] != '\0')
		return (_lenght(y + 1), s);

	else
		return (y);
		
}
