#include "main.h"
#include <stdlib.h>

/**
 * get_fm_func - finds format to execute
 * @s: format
 * Return: NULL or function to execute
 */
int (*get_fm_func(char s))(char *c)
{
    int i = 0;

    fm_t fm[] = {
        {"c", fm_char},
        {"s", fm_str},
        {NULL, NULL}};
    while (fm[i].fm != NULL)
    {
        if (s == *fm[i].fm)

            return (fm[i].f);
        i++;
    }
    fm_str("Error - unknown modifier : ");
    _putchar(s);
    _putchar('\n');
    exit(1);
}