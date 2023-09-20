#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int checker(const char *format, va_list arguments);

#endif
