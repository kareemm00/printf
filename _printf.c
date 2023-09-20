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
	char *str;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
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
					count += _putchar(va_arg(arguments, int));
					break;
				case 's':
					str = (va_arg(arguments, char *));
					if (str == NULL)
					{
						str = "(null)";
						write(1, str, 6);
						count += 6;
					}
					else
						count += _strlen(va_arg(arguments, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					_putchar(*format); 
			} 
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(arguments);
	return (count);
}
