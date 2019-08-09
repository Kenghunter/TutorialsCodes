#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int monSales;
	float inc;

	printf("enter your monthly sales.");
	scanf("%d", &monSales);

	if (monSales < 10000)
	{
		inc = 200 + 0.03 * monSales;
		printf("your income is %f", inc);
	}
	else if (monSales <=20000 && monSales >= 10000)
	{
		inc = 250 + 0.05 * monSales;
		printf("your income is %f", inc);
	}
	else if (monSales <= 30000 && monSales >= 20000)
	{
		inc = 300 + 0.09 * monSales;
		printf("your income is %f", inc);
	}
	else if (monSales <= 40000 && monSales >= 30000)
	{
		inc = 325 + 0.12 * monSales;
		printf("your income is %f", inc);
	}
	else if (monSales <= 50000 && monSales >= 40000)
	{
		inc = 350 + 0.14 * monSales;
		printf("your income is %f", inc);
	}
	else 
	{
		inc = 375 + 0.16 * monSales;
		printf("your income is %f", inc);
	}
	
	system("pause");
}
