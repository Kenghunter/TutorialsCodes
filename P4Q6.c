#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	int num1, num2, num3, num4, num5;
	printf("Enter 4 digit number ->");
	scanf("%d", &num1);
	num2 = num1 %10;
	num3 = num1 % 100;
	num4 = num1 % 1000;
	num5 = num1 % 10000;

	printf("digit 1 =%d\n", num2);
	printf("digit 2 =%d\n", num3);
	printf("digit 3 =%d\n", num4);
	printf("digit 4 =%d\n", num5);

	system("pause");
}
