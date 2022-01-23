#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[20];
	printf("Enter your name : ");     // to reduce the space problem we use gets() function
	gets(s1);
	printf("My name is : %s\n",s1);
	printf("Length of the string = %d",strlen(s1));
	getch();
}