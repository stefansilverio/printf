#include <stdio.h>
#include "../holberton.h"

/**
 * main - tests _printf against stdio::printf
 * Return: 0 on SUCCESS
 */
int main(void)
{
	int a = 0;
	int b = 0;

	a = printf("stdio%");
	b = _printf("ours%");
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
