#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char s1="prince";    // cannot convert char* to char so so we must assign the size of character
	// because we want to enter string but and string is collection of
	// char so we must give the size of string
	// otherwise compiler thinks that we assign data type char so we enter
	// at most 2 char
	printf("My name is %s",s1);
	getch();
}