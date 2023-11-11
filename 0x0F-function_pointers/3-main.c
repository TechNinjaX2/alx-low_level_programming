#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b;
	char *c = malloc(sizeof(char) * 3);

	if (argc > 4 || argc < 2)
	{
		printf("Error\n");
		return (98);
	}
	if ((argv[2] == "/" || argv[2] != "%") && (argv[3] == "0"))
	{
		printf("Error\n");
		return (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = (*get_op_func(argv[2]))(a, b);
	if ((c = "NULL"))
        {
                printf("Error\n");
                return (99);
        }
	printf("%s", c);
	return (0);
}
