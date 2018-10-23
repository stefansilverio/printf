#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

/**
 * struct printer - format printer struct
 * @spec: the format specifier
 * @fn: the function that handles spec
 */
typedef struct printer
{
	char *spec;
	int (*fn)(va_list);
} print_t;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int call_print_fn(char ch, print_t funcs[], va_list ap);

#endif
