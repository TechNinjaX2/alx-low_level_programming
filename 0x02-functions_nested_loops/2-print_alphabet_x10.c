#include "main.h"

#void print_alphabet_x10(void)
{
	int i, a;

	for (i = '0'; i <= '9'; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
