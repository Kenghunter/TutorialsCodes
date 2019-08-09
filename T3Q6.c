#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	char add1[20], add2[20], add3[20], custName[20];

	printf("Enter Customer Name ->");
	scanf("%s", &custName);		//%[^\n] optional

	printf("Enter Address in 3 lines:\n");

	printf("Line 1 >");
	scanf("%s", &add1);

	printf("Line 2 >");
	scanf("%s", &add2);

	printf("Line 3 >");
	scanf("%s", &add3);

	printf("%s,your ordered items will be sent to:\n", custName);
	printf("%s\n%s\n%s\n \\\\( QAQ)//\n", add1 ,add2 ,add3 );
	



	system("pause");


}
