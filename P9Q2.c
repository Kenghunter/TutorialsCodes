#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)
void output(const char alph, int num);
void main()
{
	char title[32] = "programming concept and design";
	int count[5] = { 0,0,0,0,0 };
	char vowel[5] = { 'a','e','i','o','u' };

	for (int check = 0;check < 32;check++)
	{
		for (int innercheck = 0;innercheck < 5;innercheck++)
			if (title[check] == vowel[innercheck])
				count[innercheck]++;
	}
	for(int num=0;num<5;num++)
	{
		printf("%c has %d times\n", vowel[num], count[num]);
		
	}
	system("pause");
}
//all error need correction