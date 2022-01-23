#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,l,m,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("Ritika ");
		}
		printf("\n");
	}
	printf("\n");
	for(k=1;k<=5;k++)
	{
		for(l=1;l<=k;l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	printf("\n");
	for(m=1;m<=5;m++)
	{
		for(n=1;n<=m;n++)
		{
			printf("%d",m);
		}
		printf("\n");
	}
	getch();
}