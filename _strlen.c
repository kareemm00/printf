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
	int length, i;
	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
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

