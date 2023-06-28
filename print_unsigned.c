#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @num: The unsigned integer to print
 * Return: Number of characters written to stdout
 */

int print_unsigned(unsigned int num)
{
	int count = 0;
	unsigned int divisor = 1;

	while (num / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		count += _putchar('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
