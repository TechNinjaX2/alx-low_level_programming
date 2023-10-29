#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - find the least number of change
 * @argc: number of arguments
 * @argv: the array
 * Return: Always 0(Success).
 */
int main(int argc, char *argv[])
{
	int r, z, s, s1, s2 t, t1, t2, u, u1, u2, v, v1, v2, w, w1, w2;

	if (argc < 3 && argc > 1)
	{
		r = atoi(argv[1]);
		s = r % 25;
		s1 = r - s;
		s2 = s1 / 25;
		t = s % 10;
		t1 = s - t;
		t2 = t1 / 10;
		u = t % 5;
		u1 = t - u;
		u2 = u1 / 5;
		v = u % 2;
		v1 = u - v;
		v2 = v1 / 2;
		w = v % 1;
		w1 = v - w;
		w2 = w1 / 1;
		z = s2 + t2 + u2 + v2 + w2;
		if (r < 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", z);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
