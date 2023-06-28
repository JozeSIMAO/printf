#include "main.h"

/**
 * print_int - prints a number to stdout
 * @num: number to be printed
 *
 * Return: num of numbers printed
 */

int print_int(int num)
{
	int counter  = 0;
	int divisor = 1;

	if (num < 0)
	{
		counter += _putchar('-');
		num = -num;
	}


	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		counter += _putchar('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
	}

	return (counter);
}
