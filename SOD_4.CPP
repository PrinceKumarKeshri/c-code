#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	long int sixDigitNumber,tempVar;
	int sumOfDigit=0,limit;
	printf("Enter the six digit number = ");
	scanf("%ld",&sixDigitNumber);
	printf("Enter the length of number = ");
	scanf("%d",&limit);
	tempVar=sixDigitNumber;
	for(int i=1;i<=limit;i++)
	{
		sumOfDigit=sumOfDigit+(tempVar%10);
		tempVar=tempVar/10;
	}
	printf("Sum of all digits in %ld = %d",sixDigitNumber,sumOfDigit);
	getch();
}