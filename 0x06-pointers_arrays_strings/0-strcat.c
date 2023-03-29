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
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	
	return (s);
}
