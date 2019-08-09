#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#pragma warning (disable: 4996)

void main()
{
	char entry,productentry;

	printf("enter your lowercase character \n");
	scanf("%c", &entry);


	printf("your upper case of %c is %c\n", entry, toupper(entry));

	system("pause");

}
