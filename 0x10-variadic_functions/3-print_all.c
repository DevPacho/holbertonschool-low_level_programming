#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *p;
	unsigned int a = 0;

	va_start(args, format);
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				p = va_arg(args, char *);
				if (p == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
			default:
				a++;
				continue;
		}
		if (format[a + 1])
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(args);
}
