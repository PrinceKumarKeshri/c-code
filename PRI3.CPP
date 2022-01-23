#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("  ");
		}
		for(j=i;j<=4;j++)
		{
			printf("* ");
		}
		for(j=i;j<=3;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}