#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *str;

	va_start(valist, n);

	if (n > 0)
{
		do {
			str = va_arg(valist, char *);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");

			if (i < n - 1 && separator)
				printf("%s", separator);

			i++;
		} while (i < n);
	}

	printf("\n");
	va_end(valist);
}
