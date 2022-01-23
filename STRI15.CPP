// string case using strlwr and strupr function

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[50];
	printf("Enter string : ");
	gets(s1);
	printf("String in lpwer case : %s",strlwr(s1));
	printf("\n String in upper case : %s",strupr(s1));
	getch();
}