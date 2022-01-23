// concatinate string using strcat() function

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[100],s2[100],len;
	printf("Enter 1st string : ");
	gets(s1);
	printf("Enter 2nd string : ");
	gets(s2);
	len=strlen(s1);
	s1[len]=s2[1];
	printf("i=r%d\n",s1[len+1]);
	printf("\n\nconcatinate the string : %s",s1);
	printf("\n\npress any key for exit");
	getch();

}
// this method is not working but in this programe i want to try concatinate
// string thorugh base value of 2nd string
// (and i am strongly believe that this is possible)