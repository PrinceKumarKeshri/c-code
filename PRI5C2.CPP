#include<stdio.h>
#include<conio.h>
void main()
{
	//using one decrement and one increment operator
	clrscr();
	int i,j,k,l,m,n;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("Ritika ");
		}
		printf("\n");
	}





	printf("\n");
	for(k=1;k<=5;k++)
	{
		for(l=5;l>=k;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}





	printf("\n");
	for(m=1;m<=5;m++)
	{
		for(n=5;n>=m;n--)
		{
			printf("%d",m);
		}
		printf("\n");
	}
	getch();
}