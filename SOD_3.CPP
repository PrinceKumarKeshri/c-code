#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	long int sixDigitNumber,tempVar;
	int sumOfDigit=0;
	printf("Enter six digit number = ");
	scanf("%ld",&sixDigitNumber);
	tempVar=sixDigitNumber;
	for(int i=1;i<=6;i++)
	{
		sumOfDigit=sumOfDigit+(tempVar%10);
		tempVar=tempVar/10;
	}
	printf("Sum of all digit in number %ld = %d",sixDigitNumber,sumOfDigit);
	getch();
}