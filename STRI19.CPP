// concatinate string using strcat() function
// try another method

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[100],s2[100],l1,l2;
	printf("Enter 1st string : ");
	gets(s1);
	printf("Enter 2nd string : ");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for(int i=0;i<l2;i++)
	{
		s1[l1+i]=s2[i];
	}
	printf("\n\nconcatinate the string : %s",s1);
	printf("\n\npress any key for exit");
	getch();

}