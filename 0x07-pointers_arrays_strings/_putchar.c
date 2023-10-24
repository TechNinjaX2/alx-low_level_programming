#include <unistd.h>

void _putchar(char c)
{
	return (write(1, &c, 1));
}
