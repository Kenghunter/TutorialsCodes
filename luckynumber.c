#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)
int inputTest(int num1, int min, int max);

void main()
{
	char alph;
	int num1;


	printf("welcome to the system\n");
	printf("input A to get number 0~20\n");
	printf("alph B to get number 21~40\n");
	printf("which one do you want");
	scanf("%c", &alph);
	srand(time(NULL));

	if (alph == 'A')
	{
		
	}
	else if (alph == 'B')
	{
		inputTest(10, 21, 0);
		if (num1 <= 30)
		{
			printf("your number is less than or equal to 30\n ");
		}
		else
		{
			printf("your number is more than 30\n");
		}
	}

	else
	{
		printf("your ans does not meet the requirement \n");
	}
	
	system("pause");
}

int inputTest(int min ,int max)
{
	int num1;
	srand(time(NULL));
	num1 = rand() % max + min;


	return num1;
}

//everything is messed up redo everything 