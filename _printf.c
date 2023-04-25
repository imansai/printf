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
			if (format[i + 1] == 's')
				charcount += get_fm_func(mod)(ptrap);

			else if (format[i + 1] == 'c')
				charcount += get_fm_func(mod)(ptrap);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				charcount++;
			}
			else if (format[i + 1] == '\0')
			{
				_putchar('\0');
			}
			else
			{
				_putchar('%');
				charcount++;
				i--;
			}
			i++;
		}
		else if (format[i] != '%')
		{
			charcount++;
			_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (charcount);
}
