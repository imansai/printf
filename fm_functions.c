#include "main.h"
#include <stdarg.h>

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

	while (*str != '\0')
	{
		_putchar(*str);
		str++, i++;
	}

	return (i);
}
