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

	if (!str)
		str = "(null)";
	while (str[count] != '\0')
		count += _putchar(str[count]);

	return (count);
}

/**
 * print_int - prints a digit from va_list
 * @ap: va_list object from calling function
 * Return: integer count of characters printed
 */
int print_int(va_list ap)
{
	int *count_ptr;
	int num;

	count_ptr = malloc(sizeof(int));

	if (!count_ptr)
		exit(-1);

	*count_ptr = 0;
	num = va_arg(ap, int);

	(*count_ptr) = print_digit(num, count_ptr);

	return (*count_ptr);
}

/**
 * print_digit - print the digits recursively
 * @num: next num in the va_arg list
 * @count: count digits
 * Return: Always 0
 */
int print_digit(int num, int *count)
{
	if (num < 0)
	{
		(*count) += _putchar('-');
		num = -num;
	} /* handle int min & max */

	if (num / 10)
	{
		print_digit(num / 10, count);
	}

	(*count) += _putchar((num % 10) + '0');
	return (*count);
}
