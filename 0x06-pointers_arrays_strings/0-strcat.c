#include "main.h"

/*
 * task 0
 */

/**
 * _strcat - concatenates string @src include null
 *           byte to the end of string @dest
 * @dest:string to concanate uppon
 * @src:source string
 * Return:dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
