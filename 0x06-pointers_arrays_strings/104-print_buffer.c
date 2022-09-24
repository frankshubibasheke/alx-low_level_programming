include "main.h"
include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
	}
	if (i < size / 10)
	{
		print_line(b, 9, i);
	}
	else
	{
		print_line(b, size % 10 - 1, i);
	}
	putchar('\n');
	if (size == 0)
	{
		putchar('\n');
	}
}

Footer
© 2022 GitHub, Inc.
