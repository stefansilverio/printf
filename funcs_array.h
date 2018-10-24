#ifndef __FUNCS_ARRAY_H__
#define __FUNCS_ARRAY_H__
print_t funcs[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{"u", print_unsigned},
	{"o", print_octal},
	{" ", print_space},
	{NULL, NULL}
};
#endif /* __FUNCS_ARRAY_H__ */
