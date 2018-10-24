#include "holberton.h"
#include "funcs_array.h"

/**
 * _printf - prints to stdout according to a format string
 * @format: constant string containing zero or more directives
 * Return: int number of characters printed (excluding terminating null-byte)
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		switch (format[++i])
		{
		case '%':
			count += _putchar('%');
			break;
		case 'c':
		case 's':
		case 'd':
		case 'i':
		case 'u':
		case 'o':
		case ' ':
			count += call_print_fn(format[i], ap);
			break;
		default:
			if (!format[i])
				return (-1);
			count += _putchar('%');
			count += _putchar(format[i]);
			break;
		}
	}
	va_end(ap);
	return (count);
}


/**
 * call_print_fn - call appropriate print fn
 * @ch: format string character
 * @ap: object to be printed
 * Return: number of characters printed
 */
int call_print_fn(char ch, va_list ap)
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
int print_space(va_list ap)
{
	char ch = va_arg(ap, int);
	int count = 0;
	int i = 0;

	while (ch == ' ')
		ch = va_arg(ap, int);

	while (funcs[i].spec != NULL)
	{
		if (ch == funcs[i].spec[0])
		{
			count += funcs[i].fn(ap);
			return (count);
		}
		i++;
	}
	count += _putchar('%');
	count += _putchar(' ');
	count += _putchar(ch);
	return (count);
}
