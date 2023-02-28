<<<<<<< HEAD
=======

>>>>>>> 17396093415e09bd3e5bfd37c2171d83036076b0
#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}

		_putchar('\n');

		i++;
	}
}
