#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int *print_num(int num, int *count);

int main(int argc, char *argv[])
{
	int *count;
	int counter = 0;

	(void) argc;
	count = &counter;

	print_num(atoi(argv[1]), count);
	_putchar('\n');
	printf("%d\n", *count);
	return (0);
}


int *print_num(int num, int *count)
{

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		print_num(num / 10, count);
	}

	(*count) += _putchar((num % 10) + '0');
	return (count);
}
