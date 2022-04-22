#include "main.h"
#include <stdio.h>

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int res, temp, expo;

	expo = 1;
/*Check negatives*/
	if (n >= 0)
		res = n * -1;
	else
	{
		res = n;
		_putchar('-');
	}

/*Initialize exponent variable*/
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
	}
/*Main */
	while (expo >= 1)
	{
		_putchar(((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
}
