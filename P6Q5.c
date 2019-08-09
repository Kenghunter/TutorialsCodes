#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int crthr;

	printf("enter your credit hour below .\n");
	scanf("%d", &crthr);

	if (crthr < 45)
	{
		printf("you are a freshman\n");
	}
	else if (crthr > 45 && crthr < 90)
	{
		printf("you are sophomore\n");

	}
	else if (crthr > 90 && crthr < 135)
	{
		printf("you juniour only no play play\n");


	}
	else
	{
		printf("SENPAI!!!!\n");
		
	}
	printf("happy studying \n");
	system("pause");

}
