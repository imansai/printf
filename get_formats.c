#include "main.h"
#include <stdlib.h>

/**
 * get_op_func - finds operator to execute
 * @s: operator to execute
 * Return: NULL or function to execute
 */
int (*get_op_func(char *s))(char *c)
{
    int i = 0;

    fm_t fm[] = {
        {'c', fm_char},
        {'s', fm_str},
        {NULL, NULL}};
    while (fm[i].fm != NULL)
    {
        if (*s == *fm[i].fm)
            return (fm[i].f);
        i++;
    }
    return (NULL);
}