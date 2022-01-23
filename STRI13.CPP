#include<stdio.h>
#include<conio.h>
int strle(char[]);
void main()
{
	clrscr();
	char s1[20];
	unsigned int len,count;
	printf("Ente your name : ");
	gets(s1);
	len=strle(s1);
	printf("length of string = %d",len);
	getch();
}
int strle(char x[])
{
	int i=0,count=0;
	while(x[i]=='\0')   // when we put '=='operator instead of '!='
	//then it will not return the actual length
	{
		count++;
		i++;
	}
	return count;
}