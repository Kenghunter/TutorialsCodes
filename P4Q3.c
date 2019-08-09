#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	float numofhr, numofmin ,cost;

	printf("enter the ammount of hours and minutes below.\n");
	printf("number of hour(s) and "
		"number of minutes(s)\n");
	scanf("%f %f", &numofhr, &numofmin);

	cost = ((numofhr*3.00)+(numofmin*0.05));

	printf("the total final cost is %.2f\n",cost);


	system("pause");

}
