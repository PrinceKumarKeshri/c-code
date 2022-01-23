#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,sum=0;
	printf("Enter n value = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i; // now we add i to sum so we will get the sum of first n numbers
	}
	printf("Sum of first %d numbers = %d",n,sum);
	getch();
}