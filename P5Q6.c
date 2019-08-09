#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main();
void myAddress();	//must mention before hand 


void main()
{
	myName();	//must rmb to add bracket 
	myAddress();

	printf("thats define a legend");

	system("pause");
}
void myName()
{
	printf("legend name shall not be mentioned");
}
void myAddress()
{
	printf("legend is everywhere");
}
