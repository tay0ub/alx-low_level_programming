#include "main.h"

/*
 * task 1
 */

/**
 * _strcat - concatenates two strings.
 * @dest: the string wich will be concatenates into.
 * @src: the string wich will be concatenated in @dest.
 * @n: length.
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;
	int a = 0;

	while (*str != '\0')
	{
		str++;
	}

	while (*src != '\0' && a<n)
	{
		*str = *src;
		str++;
		src++;
		a++;
	}
	*str = '\0';

	return (dest);
}
