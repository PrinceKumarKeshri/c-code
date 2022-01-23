#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=5;
	x=x++ + ++x;
	printf("Value of x = %d",x);
	getch();
}