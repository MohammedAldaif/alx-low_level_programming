#include "variadic_functions.h"

char *output = NULL;  
/* Global variable to store the output */

/**
 * print_char - function
 * @args: input
 * Return: void
 */

void print_char(va_list args) {
	char buffer[32];
	snprintf(buffer, sizeof(buffer), "%c, ", va_arg(args, int));
	output = realloc(output, strlen(output) + strlen(buffer) + 1);
	strcat(output, buffer);
}

/**
 * print_integer - function
 * @args: input
 * Return: void
 */

void print_integer(va_list args) {
	char buffer[32];
	snprintf(buffer, sizeof(buffer), "%d, ", va_arg(args, int));
	output = realloc(output, strlen(output) + strlen(buffer) + 1);
	strcat(output, buffer);
}

/**
 * print_string - function
 * @args: input
 * Return: void
 */

void print_string(va_list args) {
	char *str;
	char buffer[7];

	str = va_arg(args, char *);
	if (str != NULL) {
		output = realloc(output, strlen(output) + strlen(str) + 1);
		strcat(output, str);
		strcat(output, ", ");
		return ;
	}
	buffer[0] = '(';
	buffer[1] = 'n';
	buffer[2] = 'i';
	buffer[3] = 'l';
	buffer[4] = ')';
	buffer[5] = ',';
	buffer[6] = ' ';
	output = realloc(output, strlen(output) + strlen(buffer) + 1);
	strcat(output, buffer);
}

/**
 * print_float - function
 * @args: input
 * Return: void
 */

void print_float(va_list args) {
	char buffer[64];
	snprintf(buffer, sizeof(buffer), "%f, ", va_arg(args, double));
	output = realloc(output, strlen(output) + strlen(buffer) + 1);
	strcat(output, buffer);
}

/**
 * initialize_output - function
 * Return: void
 */

void initialize_output() {
	output = malloc(1);
	output[0] = '\0';
}

/**
 * free_output - function
 * Return: void
 */

void free_output() {
	free(output);
	output = NULL;
}

/**
 * print_all - function
 * @format: input
 * Return: void
 */

void print_all(const char *format, ...) {
	va_list args;
	size_t output_length;
	void (*printers[256])(va_list);

	va_start(args, format);
	initialize_output();
	printers['c'] = print_char;
	printers['i'] = print_integer;
	printers['s'] = print_string;
	printers['f'] = print_float;

	while (*format) {
		if (printers[(unsigned char)*format]) {
			printers[(unsigned char)*format](args);
		}
		format++;
	}

	va_end(args);

	/* Remove the last comma and space */
	output_length = strlen(output);
	output[output_length - 2] = '\0';
	printf("%s\n", output);
	free_output();
}

/**
 * main- entry point
 * Return: int
 */

int main() {
	print_all("ceisf", 'B', 3, "stSchool", 3.14159);
	return 0;
}

