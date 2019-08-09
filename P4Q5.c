#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	double numF ,fNumber;
	int		num1;

	printf("Enter a floating number\n");
	scanf("%lf", &numF);

	num1 = numF;
	fNumber = numF - num1;

	printf("it's integral part :%d\n", num1);
	printf("its fractional part :%lf", fNumber);

	system("pause");


}
