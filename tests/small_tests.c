#include <stdio.h>
#include <limits.h>
#include "../holberton.h"

/**
 * main - tests _printf against stdio::printf
 * Return: 0 on SUCCESS
 */
int main(void)
{
	int a = 0;
	int b = 0;

	a = _printf("ours %    s", "cat");
	b = printf("stdio %    s", "cat");
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %d%    %", 42);
	b = printf("stdio %d%    %", 42);
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %%%  %s%d%%c %%%% %Ybs\n", "hello", 10, 'H', "hello");
	b = printf("stdio %%%  %s%d%%c %%%% %Ybs\n", "hello", 10, 'H', "hello");
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %d%   %\n", 50);
	b = printf("stdio %d%   %\n", 50);
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %y%");
	b = printf("stdio %y%");
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %   %", 0);
	b = printf("stdio %   %", 0);
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %   w");
	b = printf("stdio %   w");
	printf("(%d, %d)\n", a, b);

	/* Fixed! */
/*	a = _printf("ours a [z[%bgs][%s]x] woof    \n more [%c]sentence.\n", "hello", 'H');
	b = printf("stdio a [z[%bgs][%s]x] woof    \n more [%c]sentence.\n", "hello", 'H');
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %c%c   hi  %bc%s    - - ***\n", 'H', 'H', "hello");
	b = printf("stdio %c%c   hi  %bc%s    - - ***\n", 'H', 'H', "hello");
	printf("(%d, %d)\n", a, b);

	a = _printf("ours %w");
	b = printf("stdio %w");
	printf("(%d, %d)\n", a, b);
*/
	return (0);
}
