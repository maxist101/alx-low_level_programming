#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}

