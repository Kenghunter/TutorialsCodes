 #include <stdio.h>
#include <stdlib.h> 
#pragma warning(disable: 4996)
#define PI 3.141592654

void main()
{
	double area , circumference, radius;

	printf("PLease enter the amount of radius\n");
	scanf("%lf", &radius);

	area = (PI * radius * radius);
	circumference = (2 * PI * radius);
	
	printf("area=%.2f\n", area);
	printf("circumference=%.2f\n", circumference);

	system("pause");


	

	


}

