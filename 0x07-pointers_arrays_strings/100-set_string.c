#include "main.h"

/*
 * task 8
 */

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer to char
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
