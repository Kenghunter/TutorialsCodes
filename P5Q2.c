#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)


void main()
{
	double num1,cosv, tanv,sinv,rad;

	printf("enter your degree value.\n");
	scanf("%lf", &num1);

	rad = num1 *(3.14159/180);
	cosv = cos(rad);
	tanv = tan(rad);
	sinv = sin(rad);


	printf("your value of cos is %f\n",cosv);
	printf("your value of sin is %f\n", sinv);
	printf("your value of tan is %f\n",tanv);

	system("pause");

}
