#include "main.h"
#include <stdio.h>

/*
 * task 11
 */

/**
 * print_to_98 - print natural numbers from the input to 98 separted by ,.
 * * @n: the input number
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
