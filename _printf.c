#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: a character string.
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arguments, format);
	for( ; *format; format++)
	{ if (*format == '%')
		{ format++;
			switch (*format) {
				case 'c':
					count += _putchar(va_arg(arguments, int));
					break;
				case 's':
					count += _strlen(va_arg(arguments, char *));
					break;
				case '%':
					
					break;
				default:
					_putchar(*format);
			}
		}
		else
			count += _putchar(*format);
	}
	va_end(arguments);
	return (count);
}
