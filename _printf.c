#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * handlepercent - Prints % and char
 * @c: char to print
 * Return: number of characters printed
 */
int handlepercent(char c)
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

/**
 * _putnbr - Prints number
 * @num: number to print
 * Return: int count
 */

int _putnbr(int num)
{
	int count = 0;

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		count += 2;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	if (num > 9)
	{
		count += _putnbr(num / 10);
	}

	_putchar(num % 10 + '0');
	count++;

	return (count);
}
/**
 * _printf - Prints string with formating
 * @format: pointer to str
 * @...: variables according to format
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	int charcount = 0, i = 0;
	va_list ap;
	char mod;
	va_list *ptrap = &ap;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			mod = format[i + 1];
			while (mod == ' ')
				mod = format[i++ + 2];
			if (mod == 's' || mod == 'c' || mod == 'i' || mod == 'd' || mod == 'b')
				charcount += get_fm_func(mod)(ptrap);
			else if (mod == '%')
			{
				charcount += handlepercent('%');
			}
			else if (format[i + 1] != '\0')
				charcount += handlepercent(mod);
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
