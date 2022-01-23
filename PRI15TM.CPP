#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n=5;
	for(i=1;i<=5;i++)
	{
		if(i<5)
		{
			for(j=1;j<=5;j++)
			{
				if(j==5)
				{
					printf("*");
				}
				else if(j<n || n<j)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
		}
		else
		{
			for(j=1;j<=5;j++)
			{
				printf("* ");
			}
		}
		printf("\n");
		n--;
	}
	getch();
}