#include "main.h"
/**
 * _puts - prints a str then a new line to stdout
 * @str: str being printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
