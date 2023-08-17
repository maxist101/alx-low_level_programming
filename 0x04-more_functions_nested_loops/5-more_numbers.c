#include "main.h"
/**
*more_numbers- prints the numbers, from 0 to 14, 10 times
*Return: from 0 to 14 10 times, followed by a new line.
**/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar('1');
		}
			_putchar('0' + (y % 10));

		}
		_putchar('\n');

	}
}
