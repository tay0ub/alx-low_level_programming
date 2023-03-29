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
	int index, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
