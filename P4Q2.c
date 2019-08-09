#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	float fhh,cen;

	printf("please enter the centigrade value below \n");
	scanf("%f",&cen);

	fhh = (32 + (cen*1.8));

	printf("the fahrenheight value for this is %.2f .\n",fhh);
	
	system("pause");

}
