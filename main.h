#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_integers(va_list arguments);

#endif
