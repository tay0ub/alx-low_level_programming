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
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}

	return (dest);
}
