#include "main.h"
/**
 * _printf - prints characters to stdout
 * @format: a character string
 * Return: number of characters printed (excluding the null
 * terminator)
 */
int _printf(const char *format, ...)
{
	int chars_printed = 0, i = 0;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			switch (format[i])
			{
				case 'c':
					chars_printed += _putchar(va_arg(list, int));
					break;
				case 's':
					chars_printed += _puts(va_arg(list, char*));
					break;
				case 'S':
					chars_printed += print_custom_string(va_arg(list, char *));
					break;
				case 'd':
				case 'i':
					chars_printed += print_int(va_arg(list, int));
					break;
				case 'b':
					chars_printed += print_binary(va_arg(list, unsigned int));
					break;
				case 'u':
					chars_printed += print_unsigned(va_arg(list, unsigned int));
					break;
				case 'o':
					chars_printed += print_octal(va_arg(list, unsigned int));
					break;
				case 'x':
					chars_printed += print_hex(va_arg(list, unsigned int), 0);
					break;
				case 'X':
					chars_printed += print_hex(va_arg(list, unsigned int), 1);
					break;
				case 'p':
					chars_printed += print_pointer(va_arg(list, void *));
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					chars_printed += 2;
			}
		}
		else
		{
			chars_printed += _putchar(format[i]);
		}
		i++;
	}
	va_end(list);

	return (chars_printed);
}
