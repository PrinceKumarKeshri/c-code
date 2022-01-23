// concatinate string using strcat() function

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[100],s2[100];
	printf("Enter 1st string : ");
	gets(s1);
	printf("Enter 2nd string : ");
	gets(s2);
	printf("\n\nconcatinate the string : %s",strcat(s1,s2));
	printf("\n\npress any key for exit");
	getch();

}