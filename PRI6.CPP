#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,l;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(k=1;k<=3;k++)
	{
		for(l=k;l<=3;l++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}