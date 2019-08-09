#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main()
{
	int m = 97;
	char n = 'A';
	float x = 1.234567;
	double y = 9.876543;
	char str1[10] = "Goose";
	char str2[10] = "Homework";


	printf("%d %c\n" ,m ,n);
	printf("%c %d\n", m, n);
	printf("Integer=%5d\n", m);
	printf("Float=%8.4f\n", x);
	printf("Double=%.2f\n", x);
	printf("X=%5.2f\\Y=%5.2f\n", x, y);
	printf("%5.3s%-10.3s\n", str1, str1);
	printf("%0.2s %-7.4s\n", str1, str2);

	system("pause");

}

