#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
/**
 * main - tbd
 * Return: 0;
 */

int main()
{
	int len_1 = 0, len_2 = 0;

	printf("Expected output:    ");
	len_1 = printf("%");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("%");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	len_1 = printf("%   ");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("%   ");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	len_1 = printf("test%");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("test%");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	len_1 = printf("%  s", "valid format");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("%  s", "valid format");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	return (0);
}