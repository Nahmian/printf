#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _putchar(char c);
int _strlen(char *s);


int _printf(const char *format, ...);
int print_char(va_list ptr);
int print_str(va_list ptr);
int print_porcentage(void);
int print_binary(va_list b);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_unsigned(va_list u);
int print_octal(va_list o);

#endif
