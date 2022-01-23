#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=10,y=20,z;
	z=x++ * --y;
	printf("x = %d\ny = %d\nz = %d",x,y,z);
	getch();
}