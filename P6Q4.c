#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

void main()
{
	int numofhrs, xtrahrs;
	float finpay;

		printf("enter your time being a slave woring for peanut \n");
		scanf("%d", &numofhrs);

		if (numofhrs > 40)
		{
			xtrahrs = numofhrs - 40;
			finpay = (xtrahrs * 9) + (40 * 6);
			printf("good slave your pay will be %.2f\n", finpay);

		}
		else if (numofhrs == 40)
			{
				finpay = (numofhrs * 6);
				printf("m8,you worked just on the line ,%.2f\n", finpay);
			}
		else 
		{
			finpay = (numofhrs * 6);
		printf("work harder or i will fire you ,%.2f\n", finpay);
		system("pause");
		printf("NOW BUST OFF SLACKER");
		
		}

		
	

		system("pause");
}
	



		
	
		
		
	

		
		
