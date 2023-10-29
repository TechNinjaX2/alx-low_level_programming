#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - find the least number of change
 * @argc: number of arguments
 * @argv: the array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int r, s, t, u, v, w;

	if (argc < 3)
	{
		r = atoi(argv[1]);
		s = r / 25;
		t = r / 10;
		u = r / 5;
		v = r / 2;
		w = r / 1;
		if (r < 0)
		{
			printf("0\n");
		}
		if (s < t && s < u && s < v && s < w)
		{
			printf("%d\n", s);
		}
		if (t < s && t < u && t < v && t < w)
		{
			printf("%d\n", t);
		}
		if (u < s && u < t && u < v && u < w)
		{
			printf("%d\n", u);
		}
		if (v < s && v < t && v < u && v < w)
		{
			printf("%d\n", v);
		}
		if (w < s && w < t && w < u && w < v)
		{
			printf("%d\n", w);
		}
	}
	else
	{
		printf("Error\n");
		return(1);
	}
	return (0);
}
