nclude <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...) {
	int chars_count = 0;

	va_list list;
	va_start(list, format);

	while (*format)
	{
		int c;
		char *string;

		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == 'c')
			{
				c = va_arg(list, int);
				write(1, &c, 1); // Use 1 instead of STDOUT_FILENO
				chars_count++;
			}
			else if (*format == 's')
			{
				string = va_arg(list, char*);
				while (*string)
				{
					write(1, string, 1); // Use 1 instead of STDOUT_FILENO
					string++;
					chars_count++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1); // Use 1 instead of STDOUT_FILENO
				chars_count++;
			}
		}
		else
		{
			write(1, format, 1); // Use 1 instead of STDOUT_FILENO
			chars_count++;
		}
		format++;
	}

	va_end(list);
	return chars_count;
}

int main(void)
	int chars_printed = _printf("Hello, %s! My favorite character is %c.%%\n", "World", 'A');
	printf("\nTotal characters printed: %d\n", chars_printed);
	return 0;
	}
