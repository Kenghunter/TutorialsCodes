#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)
#define MAXIMUM_LOAN_PERIOD 14
#define FINE_RATE 0.20

void main()
{
	double amountFined;
	int numberOfBooks, daysBorrowed, numberOfDaysOverdue;

	printf("Book Loan System\n");

	printf("Enter the quantity of the book/books	:");
	scanf("%d", &numberOfBooks);

	printf("Enter the day of the loan	:");
	scanf("%d", &daysBorrowed);

	numberOfDaysOverdue = daysBorrowed - MAXIMUM_LOAN_PERIOD;
	amountFined = numberOfDaysOverdue * FINE_RATE * numberOfBooks;
	

	printf("Days overdue	:%d\n" ,numberOfDaysOverdue);
	printf("Fine			:%.2f\n" ,amountFined);

	system("pause");
}
