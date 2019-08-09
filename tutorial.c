
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int x[] = { 27, 43, 19, 8, 31, 60 };
	int a = 1;
	printf("%d \n", x[a] + x[4]);
	printf("%d \n", x[a + a]);
	printf("%d \n", x[x[6 – 1 * 2]] - x[3 % 7 - 3]);
	x[a - 1] = x[a];
	x[a] = x[a + 1];
	printf("%d \n", x[a]);
	printf("%d \n", x[(x[(x[5] - 57)] - 8)]);
}
