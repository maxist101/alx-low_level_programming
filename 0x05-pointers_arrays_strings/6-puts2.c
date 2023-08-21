#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a char.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * puts2 - Prints every second character of a string.
 * @str: A pointer to string.
 */
void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

