#include <stdio.h>
#include "main.h"

/**
 * puts2 - function thats prints every character of a string
 * @str: pointer parameter
 */
void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
