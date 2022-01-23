#include<stdio.h>
#include<conio.h>
void main()
{
	//using two decrement operator
	clrscr();
	int i,j,k,l,m,n,a=0,p=5,b=5;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=p-a;j--)  //using two different variable
		{
			printf("Ritika ");
		}
		printf("\n");
		a=a+1;
	}
	printf("\n");
	for(k=5;k>=1;k--)
	{
		for(l=5;l>=b;l--)      //using one different variable
		{
			printf("%d",l);
		}
		printf("\n");
		b=b-1;
	}
	printf("\n");
	for(m=5;m>=1;m--)
	{
		for(n=5;n>=m;n--)      //using itself to m
		{
			printf("%d",m);
		}
		printf("\n");
	}
	getch();
}