#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,j,c=80;
	read n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=(c/2)-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}