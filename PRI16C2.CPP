#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<5;j++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}