#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: parameter string
 *
 * Return: length of a string
*/

int _strlen(char *s)
{
	int length;
	int count = 0;

	char *str = va_arg(arguments, char *);

	if (str == NULL)
	{
		printf("(null)");
		count += 6;
	}
	else
	{
	for (length = 0; s[length] != '\0'; s++)
	{
		count += _putchar(s[length]);
	}
	return (count);
	}
}

