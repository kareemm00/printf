#include "main.h"
/**
 * _printf - a function that produces output according to a format
 *
 * @format: a character string.
 *
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(arguments, int));
					count += 1;
					break;
				case 's':
					count += _strlen(va_arg(arguments, char*));
					break;
				case '%':
					_putchar('%');
					count += 1;
					break;
				default:
					_putchar(*format);
					break;
			}
		}
		else
		{
			_putchar(*format);
			count += 1;
		}
		format++;
	}
	va_end(arguments);
	return (count);

}
