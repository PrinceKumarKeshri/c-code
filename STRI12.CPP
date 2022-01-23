#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[20],i;
	unsigned int len,count=0;
	printf("Ente your name : ");
	gets(s1);
	len=strlen(s1);
	printf("length of string = %d\n",len);
	// count spaces between
	for(i=0;i<=len;i++)
	{
		if(s1[i]==' ')
		{
			count++;
		}
	}
	printf("Number of spaces in string = %d",count);
	getch();
}