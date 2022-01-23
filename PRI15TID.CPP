#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<n)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
		n--;
	}
	getch();
}