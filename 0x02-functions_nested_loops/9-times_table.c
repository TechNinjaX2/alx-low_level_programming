#include "main.h"
#include <string.h>

/**
 * times_table - prints multiples of 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int result;
	int result1;
	int result2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j > 0)
			{
				_putchar(',');
				if (result <= 9)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
			if (result > 9)
			{
				result1 = result / 10;
				_putchar('0' + result1);
				result2 = result % 10;
				_putchar('0' + result2);
			}
			else
			{
				_putchar('0' + result);
			}
		}
		_putchar('\n');
	}
}
