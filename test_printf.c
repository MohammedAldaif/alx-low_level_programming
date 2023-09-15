#include "mymain.h"
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
				print_char(c, chars_count);
			}
			else if (*format == 's')
			{
				string = va_arg(list, char*);
				print_string(string, chars_count);
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				chars_count++;
			}
		}
		else
		{
			print_char(*format, chars_count);
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
