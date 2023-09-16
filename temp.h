else if (*format == 'b')
                chars_count = handle_binary(va_arg(list, unsigned int), chars_count);
        else if (*format == 'x' || *format == 'X')
        {
                chars_count = handle_hexadecimal(va_arg(list, unsigned int),
                                chars_count, (*format == 'X') ? 1 : 0);
        }
        else if (*format == 'o')
                chars_count = handle_octal(va_arg(list, unsigned int), chars_count);
        else if (*format == 'u')
                chars_count = handle_unsigned_int(va_arg(list, unsigned int), chars_count);
        else if (*format == 'r')
                chars_count = handle_reverse(list, chars_count);
        else if (*format == 'p')
                chars_count = handle_p(list, chars_count);
