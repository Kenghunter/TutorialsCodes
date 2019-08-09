#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int number;

	int sum = 0;
	int numbercount = 0;



	do 
	{
		printf("ENTER A NUMBER => ");
		scanf("%d", &number);

		sum = sum + number;
		numbercount = numbercount + 1;

	} while (number != -999);
	printf("my sum is %d\n", sum);
	printf("my average is %.2f\n", (float)sum / numbercount);
	printf("my number count is %d \n", numbercount);

	system("pause");
}
