#include "main.h"

/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char a[] = "_putchar";
	while (i < 11)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
