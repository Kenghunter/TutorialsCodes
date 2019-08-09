#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	char name[15], gender;
	int age;
	float income;

	printf("please enter your <name> <age> <gender> <income>\n ");
	scanf("%s %d %c %f", &name ,&age ,&gender ,&income);

	printf("<name> : %s \n "
		"<age> : %d \n "
		"<gender> : %c \n"
		"<income>: %f\n" ,name ,age ,gender, income);

	system("pause");
	


	

}
