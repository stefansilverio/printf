#include <stdio.h>

void print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_num(num / 10);

	_putchar((num % 10) + '0');
}


int main(int argc, char *argv[])
{
	print_num(atoi(argv[1]));
	_putchar('\n');
	return (0);
}
