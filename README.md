# 0x10 - C - printf

## DESCRIPTION
Custom printf standard library function. The function acts like printf and handles strings, chars, signed and unsigned integers, binary, and octal.

#### Function prototype
```
int _printf(const char *format, ...);
```
#### Implemented format specifiers

| Specifier type | Description |
| --- | --- |
| c | Single character |
| s | String of characters |
| d or i | Signed decimal integer |
| b | Unsigned binary |
| u | Unsigned decimal integer |
| o | Unsigned octal |

#### Compilation and testing

We compiled via:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

We also have some tests in the `tests` folder. Feel free to suggest more.

## Authors
`Fernando González-Morales, Stefan Silverio`
