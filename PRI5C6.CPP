#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int k,l;
	for(k=1;k<=5;k++)
	{
		for(l=k;l<=5;l++)
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
	getch();
}