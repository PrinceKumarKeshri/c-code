#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char s1='p';
	printf("My name is %s\n",s1); // we wamt to output char but the we enter the string  format specifier so it will print any garbage value
	printf("my name is %c\n",s1); // so we change the format specifier and gives %c then it will return the char
	printf("my name is %d",s1);// it gives the ascii value pf character
	getch();
}