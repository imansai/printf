#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

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
    char *current;
    char mod;

    charcount = 0;
    i = 0;

    va_start(ap, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            current = va_arg(ap, char *);
            mod = format[i + 1];
            get_fm_func(mod)(current);
            i++;
        }
        i++;
    }
    _putchar('\n');
    return charcount;
}