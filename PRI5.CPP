#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,l,m,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}


	printf("\n");
	for(k=1;k<=5;k++)
	{
		for(l=k;l<=5;l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}


	printf("\n");
	for(m=1;m<=5;m++)
	{
		for(n=m;n<=5;n++)
		{
			printf("%d",m);
		}
		printf("\n");
	}
	getch();
}