#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=2,b=3;
	b=a++ + b--;
	a=a-- + ++b;
	b=++a + --b;
	printf("Value of a = %d\nValue of b = %d",a,b);
	getch();
}