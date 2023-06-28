#include "main.h"
/**
 * print_custom_string - prints a string with special handling for non-printable characters
 * @str: pointer to the string
 *
 * Return: number of characters printed
 */
int print_custom_string(char *str)
{
	int chars_printed = 0;
	char *hex_digits = "0123456789ABCDEF";
	
	if (str == NULL)
		str = "(null)";
	
	while (*str != '\0')
	{
		if (*str >= 32 && *str < 127)
		{
			chars_printed += _putchar(*str);
		}
		else
		{
			chars_printed += _putchar('\\');
			chars_printed += _putchar('x');
			chars_printed += _putchar(hex_digits[(*str >> 4) & 0xF]);
			chars_printed += _putchar(hex_digits[*str & 0xF]);
		}
		str++;
	}
	return (chars_printed);
}
