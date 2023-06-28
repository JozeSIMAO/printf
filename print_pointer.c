#include "main.h"
/**
 * print_pointer - Prints the address pointed to by a pointer
 * @ptr: Pointer to be printed
 *
 * Return: Number of characters printed
 */
int print_pointer(void *ptr)
{
	unsigned long int address = (unsigned long int)ptr;
	int chars_printed = 0, i = 0;
	char hex_digits[] = "0123456789abcdef";

	chars_printed += _putchar('0');
	chars_printed += _putchar('x');

	if (address == 0)
	{
		chars_printed += _putchar('0');
	}
	else
	{
		for (i = (sizeof(void *) * 2) - 1; i >= 0; i--)
		{
			chars_printed += _putchar(hex_digits[(address >> (i * 4)) & 0xF]);
		}
	}

	return (chars_printed);
}
