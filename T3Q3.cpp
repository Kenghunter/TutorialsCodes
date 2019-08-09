#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	int num1, num2, num3, num4, sum, product;

	printf("Please enter the 4 numbers \n");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	sum = num1 + num2 + num3 + num4;
	product = num1 * num2 * num3 * num4;

	printf("Total of the sum =%50d\n", sum);
	printf("Results of the product=%50d\n", product);

	system("pause");
	
}
