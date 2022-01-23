#include<stdio.h>
#include<conio.h>
void main()
{
	//using one increment and one decrement operator
	clrscr();
	int i,j,k,l,m,n,a=0,p=5,b=5;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=p-a;j--)
		{
			printf("Ritika ");
		}
		printf("\n");
		a=a+1;
	}



	printf("\n");
	for(k=1;k<=5;k++)
	{
		for(l=5;l>=b;l--)
		{
			printf("%d",l);
		}
		printf("\n");
		b--;
	}



	printf("\n");
	for(m=1;m<=5;m++)
	{
		for(n=m;n>=1;n--)
		{
			printf("%d",m);
		}
		printf("\n");
	}
	getch();
}