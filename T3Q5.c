#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	char studName[31], studID[11];

	printf("Enter your name ->\n");
	gets(studName);

	printf("Enter your student ID ->\n");
	gets(studID);

	printf("Thank you ,%s.\n",studName);
	printf("Your student ID %s is now stored in the system. \n",studID);

	system("pause");



}
