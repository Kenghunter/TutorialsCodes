#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	double x, y,num1,num2 ,num3,num4 ;

	
	printf("enter value\n");
	scanf("%lf %lf", &x ,&y);
	num1 = sqrt(x)*sqrt(y);
	num2 = sqrt(x) * sqrt(y);
	num3 = pow(x, y);
	num4 = log10(pow(x, y)); 
	printf("%lf\n", num1);
	printf("%lf\n", num2);
	printf("%lf\n", num3);
	printf("%lf\n", num4);




	system("pause");

}
