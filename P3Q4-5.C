#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	char name1[20] , name2[20];
	float amount1 ,amount2;

	printf("enter staff name :\n");
	gets( name1);
	
	printf("enter sales ammount :\n");
	scanf("%f", &amount1);

	printf("enter staff name :\n");
	rewind(stdin);
	gets(name2);
	

	printf("enter sales ammount :\n");
	
	scanf("%f", &amount2);
	rewind(stdin);
	


	printf("staff name		sales amount\n");
	printf("%-20s ,%12f\n", name1, amount1);
	printf("%-20s ,%12f\n", name2, amount2);
	
	system("pause");

}
