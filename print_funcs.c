#include <stdarg.h> /* va_list, va_start, va_arg, va_end macros */
#include <stdlib.h> /* NULL macro */
#include "holberton.h" /* _putchar */

/**
 * print_char - prints a char parameter from a va_list
 * @ap: va_list from calling function
 * Return: integer count of characters printed
 */
int print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_string - prints a string parameter from a va_list
 * @ap: va_list from calling function
 * Return: integer count of characters printed
 */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;

	while (str[count] != '\0')
		count += _putchar(str[count]);

	return (count);
}

