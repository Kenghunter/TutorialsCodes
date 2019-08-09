#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int number;

	int sum = 0, numbercount = 0;

	printf("enter number");
	scanf("%d", &number);
	
	
	while (number != -999)
	{
		sum = sum + number;
		numbercount = numbercount + 1;
	}
	
	printf("my sum is %d\n", sum);
	printf("my average is %.2f\n", (float)sum / numbercount);
	printf("my number count is %d \n", numbercount);



}
