#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	long int sixDigitNumber,tempVar;
	int sumOfDigit=0;
	printf("Enter the six digit number = ");
	scanf("%ld",&sixDigitNumber);
	tempVar=sixDigitNumber;
	while(tempVar!=0)
	{
	sumOfDigit=sumOfDigit+(tempVar%10);
	tempVar=tempVar/10;
	}
	printf("\nSum of all digits in %ld = %d",sixDigitNumber,sumOfDigit);
	getch();
}