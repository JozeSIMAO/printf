#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(int c);
int print_int(int num);
int _printf(const char *format, ...);
int _puts(char *str);
int print_binary(unsigned int num);
int print_octal(unsigned int num);
int print_unsigned(unsigned int num);
int print_hex(unsigned int num, int uppercase);
int print_custom_string(char *str);
int print_pointer(void *ptr);
#endif
