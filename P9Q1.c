#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int bArray[5] = { 1,2,3,4,5 };
	int num;
	char b;

	for (num = 0; num < 5; num++)
	{
		printf("%d\n",bArray[num]);
		
	}
	for (num = 0; num < 5; num++)
	{
		b=bArray[num] + 10;
		printf("%d\n", b );
	}
	system("pause");
}
