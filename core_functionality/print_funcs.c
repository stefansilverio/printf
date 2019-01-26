#include <limits.h>
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
 * print_int - prints an integer from va_list
 * @ap: va_list object from calling function
 * Return: integer count of characters printed
 */
int print_int(va_list ap)
{
	int *count_ptr;
	int num;

	count_ptr = malloc(sizeof(*count_ptr));

	if (!count_ptr)
		exit(-1);

	*count_ptr = 0;
	num = va_arg(ap, int);

	(*count_ptr) = print_digit(num, count_ptr);

	return (*count_ptr);
}

/**
 * print_digit - print the digits recursively
 * @num: next int in the va_arg list
 * @count: pointer to integer count digits
 * Return: pointer to integer count of character printed
 */
int print_digit(int num, int *count)
{
	if (num < 0)
	{
		if (num == INT_MIN)
		{
			(*count) += _putchar('-');
			num++;
			num = -num;
			if (num / 10)
				print_digit(num / 10, count);
			(*count) += _putchar((num % 10) + 1 + '0');
			return (*count);
		}
		else
		{
			(*count) += _putchar('-');
			num = -num;
		}
	}
	if (num / 10)
		print_digit(num / 10, count);

	(*count) += _putchar((num % 10) + '0');
	return (*count);
}

/**
 * print_unsigned - prints an unsigned int from va_list
 * @ap: va_list object from calling function
 * Return: integer count of characters printed
 */
int print_unsigned(va_list ap)
{
	int *count_ptr;
	unsigned int num;

	count_ptr = malloc(sizeof(*count_ptr));

	if (!count_ptr)
		exit(-1);

	*count_ptr = 0;
	num = va_arg(ap, unsigned int);

	(*count_ptr) = print_digit_unsigned(num, count_ptr);

	return (*count_ptr);
}

/**
 * print_digit_unsigned - print the digits recursively
 * @num: next unsigned int in the va_arg list
 * @count: pointer to integer count digits
 * Return: pointer to integer count of character printed
 */
int print_digit_unsigned(unsigned int num, int *count)
{
	if (num / 10)
		print_digit_unsigned(num / 10, count);

	(*count) += _putchar((num % 10) + '0');
	return (*count);
}


/**
 * print_octal - prints an unsigned int octal from va_list
 * @ap: va_list object from calling function
 * Return: integer count of characters printed
 */
int print_octal(va_list ap)
{
	int *count_ptr;
	unsigned int num;

	count_ptr = malloc(sizeof(*count_ptr));

	if (!count_ptr)
		exit(-1);

	*count_ptr = 0;
	num = va_arg(ap, unsigned int);

	(*count_ptr) = print_digit_octal(num, count_ptr);

	return (*count_ptr);
}

/**
 * print_digit_octal - print the digits recursively
 * @num: next usigned octal int in the va_arg list
 * @count: pointer to integer count digits
 * Return: pointer to integer count of character printed
 */
int print_digit_octal(unsigned int num, int *count)
{
	if (num / 8)
		print_digit_octal(num / 8, count);

	(*count) += _putchar((num % 8) + '0');
	return (*count);
}
