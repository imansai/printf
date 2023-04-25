#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Prints string with formating
 * @format: pointer to str
 * @...: variables according to format
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	int charcount, i;
	va_list ap;
	char mod;
	va_list *ptrap = &ap;

	charcount = 0;
	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			mod = format[i + 1];

			if (mod == 's')
				charcount += get_fm_func(mod)(ptrap);

			else if (mod == 'c')
				charcount += get_fm_func(mod)(ptrap);
			else if (mod == '%')
			{
				charcount = print2('%');
			}
			else
				charcount += print2(mod);
			i++;
		}
		else if (format[i] != '%')
		{
			charcount++;
			_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		i++;
	}
	va_end(ap);
	return (charcount);
}
