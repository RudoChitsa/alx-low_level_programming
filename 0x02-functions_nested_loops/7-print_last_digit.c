#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: A number
 *
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
