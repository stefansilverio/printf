#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * call_print_fn - call appropriate print fn
 * @ch: format string character
 * @funcs: arrays of structures and functions
 * @ap: object to be printed
 * Return: number of characters printed
 */
int call_print_fn(char ch, print_t funcs[], va_list ap)
{
	int j;
	int count = 0;

	for (j = 0; funcs[j].spec != NULL; j++)
	{
		if (ch == funcs[j].spec[0])
		{
			count += funcs[j].fn(ap);
			break;
		}
	}
	return (count);
}
