#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	long int sixDigitNumber,tempVar;
	int sumOfDigit=0,i;
	printf("Enter the six digit number = ");
	scanf("%ld",&sixDigitNumber);
	tempVar=sixDigitNumber;
	while(i=tempVar)
	{
	sumOfDigit=sumOfDigit+(tempVar%10);
	tempVar=tempVar/10;
	}
	printf("\nSum of all digits in %ld = %d",sixDigitNumber,sumOfDigit);
	getch();
}