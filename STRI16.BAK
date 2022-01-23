// without using strlwr and strupr function

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char c='A',c1='Z',c2='a',c3='z',s1[100];
	int i=0;
	printf("Enter string : ");
	gets(s1);
	printf("\nASCII value of %c, %c , %c and %c = %d, %d, %d, %d",c,c1,c2,c3,c,c1,c2,c3);
	while(s1[i]!='\0')
	{
		if(s1[i]>=65 && s1[i]<=95)
		{
			s1[i]=s1[i]+32;
		}
		i++;
	}
	printf("\n\nLower case in string : %s",s1);
	i=0;
	while(s1[i]!=0)
	{
		if(s1[i]>=97 && s1[i]<=122)
		{
			s1[i]=s1[i]-32;
		}
		i++;
	}
	printf("\n\nUpper case of string : %s",s1);
	getch();

}