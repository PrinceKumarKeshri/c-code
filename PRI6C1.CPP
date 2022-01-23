#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,l,n=4 ,m;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				{
					printf("* ");
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
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	m=n-1;
	for(k=1;k<=m;k++)
	{
		if(m%2==0)
		{
			for(l=k;l<=m;l++)
			{
				if(l%2==0)
				{
					printf("* ");
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
			for(l=k;l<=m;l++)
			{
				if(l%2==0)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	getch();
}