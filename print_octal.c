#include "main.h"

/**
 * print_octal - prints an unsigned integer in its octal representation
 * @num: unsigned integer to print
 * Return: the number of charaters written to stdout
 */

int print_octal(unsigned int num)
{
	int count = 0;
	char octal[100];
	int i = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (num != 0)
	{
		octal[i] = num % 8 + '0';
		num /= 8;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += _putchar(octal[i]);
	}
	return (count);
}
