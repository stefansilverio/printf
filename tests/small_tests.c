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

	a = printf("stdio %u\n", UINT_MAX);
	b = _printf("ours %u\n", UINT_MAX);
/*	printf("%d", a);*/
	printf("(%d, %d)\n", a, b);

/*	a = printf("stdio %c\n", '\0');
	b = _printf("ours %c\n", '\0');
	printf("(%d, %d)\n", a, b);

	a = printf("stdio %s\n", "Holberton");
	b = _printf("ours %s\n", "Holberton");
	printf("(%d, %d)\n", a, b);
*/
	return (0);
}
