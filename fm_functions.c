#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * fm_char - Prints char
 * @ptr: ptr to function args
 * Return: number of characters printed (1)
 */

int fm_char(va_list(*ptr))
{
	char c = va_arg(*ptr, int);

	_putchar(c);
	return (1);
}

/**
 * fm_str - Prints str
 * @ptr: ptr to function args
 * Return: number of characters printed
 */
int fm_str(va_list *ptr)
{
	int i = 0;
	char *str = va_arg(*ptr, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++, i++;
	}

	return (i);
}

/**
 * print2- Prints % and char
 * @c: char to print
 * Return: number of characters printed
 */
int print2(char c)
{
	if (c != '%')
	{
		_putchar('%');
		_putchar(c);
		return (2);
	}
	if (c == '\0')
		return (0);
	_putchar('%');
	return (1);
}
