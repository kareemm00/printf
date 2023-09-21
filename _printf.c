#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - a function that produces output according to a format
 * @format: a character string.
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0, p;
	va_list arguments;

	va_start(arguments, format);
	for (p = 0; format[p] != '\0'; )
	{
		if (format[p] != '%')
		{
			count += _putchar(format[p]);
			p++;
		}
		else if (format[p] == '%' && format[p + 1] != ' ')
		{
			switch (format[p + 1])
			{
				case 'c':
					count += _putchar(va_arg(arguments, int));
					break;
				case 's':
					count += _strlen(va_arg(arguments, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_integers(va_arg(arguments, int));
					break;
				case 'i':
					count += print_integers(va_arg(arguments, int));
					break;
				default:
					break;
			}
			p += 2;
		}
	}
	return (count);
}
