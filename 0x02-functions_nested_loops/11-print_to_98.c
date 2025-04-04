#include "main.h"
#include <stdio.h>

/**
 * print_int - prints numbers
 * @n: number to be printed
 * Return: nothing
 */
void print_int(int n)
{
	char pv1 = n % 10;
	int pv3 = n / 100;
	int pv2 = (n / 10) - (pv3 * 10);


	if (n < 0)
	{
		_putchar('-');
		if (n < -99)
		{
			_putchar('0' - pv3);
		}
		if (n < -9)
		{
			_putchar('0' - pv2);
		}
		_putchar('0' - pv1);
	}
	else
	{
		if (n > 99)
		{
			_putchar('0' + pv3);
		}
		if (n > 9)
		{
			_putchar('0' + pv2);
		}
		_putchar('0' + pv1);
	}
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}

}

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number to start from
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_int(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_int(i);
		}
	}
}

