#include "main.h"

/**
 * _putchar - prints char into stdout
 * @c: character to be outputted
 *
 * Return: character written
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
