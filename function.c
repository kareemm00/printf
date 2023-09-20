#include "main.h"

/**
 * checker - a function that produces output according to a format
 * @format: a character string.
 * @arguments: parameters
 * Return: number of characters printed
*/

int checker(const char *format, va_list arguments)
{
	int count = 0;
	char *str;

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
			{
				write(1, str, _strlen(str));
				count += _strlen(str);
			}
				break;
		case '%':
			count += write(1, "%", 1);
			break;
		case 'd':
			count += print_integers(arguments);
			break;
		case 'i':
			count += print_integers(arguments);
			break;
			default:
			_putchar(*format);
			}
	return (count);
}
