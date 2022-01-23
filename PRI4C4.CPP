#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				{
					printf(" *");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				{
					printf("  ");
				}
				else
				{
					printf(" *");
				}
			}
			printf("\n");
		}
	}
	printf("\n");
	getch();
}