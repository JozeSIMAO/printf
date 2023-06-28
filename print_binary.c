#include "main.h"

/**
 * print_binary - Writes the binary representation of a number to stdout.
 * @num: The unsigned int to convert to binary.
 *
 * Return: The number of characters written to stdout.
 */
int print_binary(unsigned int num)
{
    int counter = 0, i = 0, j = 0, binary_digits[32];

    if (num == 0)
    {
        counter += _putchar('0');
        return counter;
    }

    while (num > 0)
    {
        binary_digits[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        counter += _putchar('0' + binary_digits[j]);
    }

    return counter;
}
