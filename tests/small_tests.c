#include <stdio.h>
#include "../holberton.h"

/**
 * main - tests _printf against stdio::printf
 * Return: 0 on SUCCESS
 */
int main(void)
{
	int a, b;

	a = printf("a\n");
	b = _printf("a\n");
	printf("(%d, %d)\n", a, b);

	a = printf("%c\n", 'A');
	b = _printf("%c\n", 'A');
	printf("(%d, %d)\n", a, b);

	a = printf("%s\n", "Holberton");
	b = _printf("%s\n", "Holberton");
	printf("(%d, %d)\n", a, b);

	return (0);
}
