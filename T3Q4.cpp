#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	char C1, C2, C3;

	printf("Enter 1st character -->\n");
	C1 = getchar();

	printf("Enter 2nd character -->\n");
	rewind(stdin);
	C2 = getchar();

	printf("Enter 3rd character -->\n");
	rewind(stdin);
	C3 = getchar();

	printf("You have entered %c ,%c and %c. \n", C1, C2, C3);

	system("pause");

}
