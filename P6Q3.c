#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int numYrs;
	double savings, interestEarned;
	float rate;

	printf("Enter the how long you put money in bank\n");
	scanf("%d", &numYrs);
	printf("enter your amount of your savings \n");
	scanf("%lf", &savings);
	if (numYrs >= 5)
	{
		printf("noice,");
		rate = 7.5;
		interestEarned = rate * savings * numYrs;
		printf("your interest earned is %.2lf\n", interestEarned);



	}

	else
	{
		printf("ok,");
		rate = 5.4;
		interestEarned = rate * savings * numYrs;
		interestEarned = rate * savings * numYrs;
		printf("your interest earned is %.2lf\n", interestEarned);

	}
	

	system("pause");
}
