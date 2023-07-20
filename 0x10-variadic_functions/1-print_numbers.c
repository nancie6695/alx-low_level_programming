#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- print numbers followed by new line
 * @separator: the string between numbers
 * @n: the intergers to be passed
 * @...: variable number of parameters to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list num;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
