#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	int num1, num2,num3, num4, num5;
	printf("Enter a floating number ->");
	scanf("%d", &num1);

	num2 = num1 / 1000;
	num3 = num1 % 1000/ 100;
	num4 = num1 % 100 / 10;
	num5 = num1 % 10;

	printf("1st digit is :%d \n",num2);
	printf("2nd digit is :%d \n",num3);
	printf("3rd digit is :%d \n",num4);
	printf("4rd digit is :%d \n",num5);

	system("pause");

}
