#include "main.h"

/**
 * print_numbers - prints 0-9 followed by new line
 * return: 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
