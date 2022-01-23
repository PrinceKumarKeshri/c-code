#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char name;
	printf("Enter your name : ");
	scanf("%s",name);
	printf("%d",&name);
	printf("\nHi %s, welcome",name);
	getch();
}