// reverse of the string

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[50];
	int i=0,j,temp;
	printf("enter the string : ");
	gets(s1);
	j=strlen(s1);
	printf("Length of the string = %d\n",j);
	if(j%2==0)
	{
		while(i<j)
		{
			temp=s1[i];
			s1[i]=s1[j-1];
			s1[j-1]=temp;
			i++;
			j--;
		}
	}
	else
	{
		while(i<j)
		{
			temp=s1[i];
			s1[i]=s1[j-1];
			s1[j-1]=temp;
			i++;
			j--;
		}
	}
	printf("reverse string : %s",s1);
	getch();
}
