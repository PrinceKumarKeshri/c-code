#include<stdio.h>
#include<conio.h>
void main()
{
	//using two decrement operator
	clrscr();
	int i,j,k,l,m,n;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=6-i;j--)  //using two different variable
		{
			printf("%d",i);
		}
		printf("\n");
	}
	printf("\n");
	for(k=5;k>=1;k--)
	{
		for(l=5;l>=6-k;l--)      //using one different variable
		{
			printf("%d",l);
		}
		printf("\n");
	}
	printf("\n");
	for(m=5;m>=1;m--)
	{
		for(n=m;n>=1;n--)      //using itself to m
		{
			printf("%d",n);
		}
		printf("\n");
	}
	getch();
}