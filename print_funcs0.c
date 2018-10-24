#include "holberton.h"

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

int print_space(va_list ap)
{
	char ch = va_arg(ap, int);
	int count;
	int i;

	while (ch == ' ')
		ch = va_arg(ap, int);

	while (funcs[i].spec[0] != NULL)
	{
		if (ch == funcs[i].specs[0])
		{
			count += funcs[i].fn(ap);
			i++;
		}
		else
		{
			count += _putchar('%');
			count += _putchar(' ');
			count += _putchar(ch);
		}
		return (count);
	}
}
