#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	double sidea, sideb, sidec, anga;

	printf("enter the value for side b\n");
	scanf("%lf", &sideb);
	printf("enter the value for side c\n");
	scanf("%lf", &sidec);
	printf("enter the value for angle a \n");
	scanf("%lf", &anga);
	
	sidea = sqrt(pow(sideb, 2) + pow(sidec, 2) - (2 *(sideb)*(sidec)* cos(anga)));
	printf("the value of side a is %f\n", sidea);

	system("pause");
}
