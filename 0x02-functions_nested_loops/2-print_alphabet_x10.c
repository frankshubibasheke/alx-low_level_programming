#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowwercase.
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	int i, n;

	n = 0;

	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar('\n');
	}
}

