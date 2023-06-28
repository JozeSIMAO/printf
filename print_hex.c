#include "main.h"

/**
 * print_hex - prints an unsigned integer in hexadecimal form
 * @num: unsigned integer to use
 * @uppercase: indicates whether to use uppercase letters for hex digits
 * Return: Number of characters printed
 */

int print_hex(unsigned int num, int uppercase)
{
	int count = 0, i = 0, remainder;
	char hex_digits[100];

	if (num == 0)
	{
		count += _putchar ('0');
		return (count);
	}

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hex_digits[i] = remainder + '0';
		}
		else
		{
			hex_digits[i] = (uppercase ? 'A' : 'a') + (remainder - 10);
		}
		num /= 16;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += _putchar(hex_digits[i]);
	}
	return (count);
}
