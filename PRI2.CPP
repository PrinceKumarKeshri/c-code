#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		for(j=2;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}