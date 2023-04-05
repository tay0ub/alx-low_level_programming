#include "main.h"

/*
 * task 7
 */

/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not
 * @s: the string
 * Return: 1 if palindrome , 0 if not
 */

int is_palindrome(char *s)
{
	int l;

	l = len(0, s);

	if (*s == 0)
		return (1);

	else
		return (str(s, 0, l));
}

/**
 * str - check if the str is palindrome
 * @s: the string
 * @a: int
 * @l: length
 * Return: 0 or 1
 */

int str(char *s, int a, int l)
{
	if (a == l)
		return (1);

	else

	{
		if (s[a] == s[l])
			return (str(s, a + 1, l - 1));
	}

	return (0);
}

/**
 * len - calcule the length
 * @s: the string
 * @a: int
 * Return: int
 */

int len(int a, char *s)
{
	if (s[a] != '\0')
		return (len(a + 1), s);

	else
		return (a);

}
