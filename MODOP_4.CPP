#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=5;
	a=a+++a;  //modify operator is more priority than the arithmetic operator
	printf("Value of a = %d",a);
	getch();
}