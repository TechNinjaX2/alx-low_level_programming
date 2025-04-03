#include "main.h"

/**
 * jack_bauer - prints the time of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int minute;
	int minute2;
	int hour;
	int hour2;

	for (hour = 0; hour <= 2; hour++)
	{
		for (hour2 = 0; hour2 <= 9; hour2++)
		{
			if (hour == 2 && hour2 == 4)
			{
				break;
			}
			for (minute = 0; minute <= 5; minute++)
			{
				for (minute2 = 0; minute2 <= 9; minute2++)
				{
					_putchar('0' + hour);
					_putchar('0' + hour2);
					_putchar(':');
					_putchar('0' + minute);
					_putchar('0' + minute2);
					_putchar('\n');
				}
			}
		}
	}
}
