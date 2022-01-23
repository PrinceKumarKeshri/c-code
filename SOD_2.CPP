#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	long int sixDigitNumber,tempVar,sumOfDigit=0;
	printf("Enter six digit number = ");
	scanf("%ld",&sixDigitNumber);
	tempVar=sixDigitNumber;
	sumOfDigit=sumOfDigit+(tempVar%10);
	tempVar=tempVar/10;
	sumOfDigit=sumOfDigit+(tempVar%10);
	tempVar=tempVar/10;
	sumOfDigit=sumOfDigit+(tempVar%10);
	tempVar=tempVar/10;
	sumOfDigit=sumOfDigit+(tempVar%10);
	tempVar=tempVar/10;
	sumOfDigit=sumOfDigit+(tempVar%10);
	tempVar=tempVar/10;
	sumOfDigit=sumOfDigit+(tempVar%10);
	printf("\nSum of digits = %d",sumOfDigit);
	getch();
}