#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
	int x, fx;

	for (i = 0; x < 10; x++)
	{
		for (fx = 0; fx <= 14; fx++)
		{
			if (fx >= 10)
				_putchar((fx / 10) + 48);
			_putchar((fx % 10) + 48);
		}
		_putchar('\n');
	}
}
