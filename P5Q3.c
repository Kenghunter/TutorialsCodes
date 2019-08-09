#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	double corx1,corx2, cory1,cory2,distance;

	printf("enter your first coordinate X and y \n");
	scanf("%lf %lf", &corx1, &cory1);
	printf("enter your second coordinate X and y \n");
	scanf("%lf %lf",&corx2,&cory2);

	distance = sqrt((pow(corx1 - corx2, 2) + pow(cory1 - cory2, 2)));
	printf("your distance between 2 points is %lf \n", distance);





	system("pause");
}
