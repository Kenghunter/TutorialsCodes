#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	int num1, num2, num3, num4, num5 ,total ;
	float avr;

	printf("please enter the first 5 number.");
	scanf("%d %d %d %d %d",&num1, &num2, &num3, &num4, &num5);

	total = num1 + num2 + num3 + num4 + num5;
	avr = (num1 + num2 + num3 + num4 + num5) / 5;

	printf("the sum of the number is = %d", total);
	printf("the average of the 5 number is =%f", avr);

	system("pause");




}
