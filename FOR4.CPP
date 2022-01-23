#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,sum=1;
	printf("Enter n value = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*n; // if we multiply n insted of i then it will multiply from n to n times
	}
	printf("Sum of first %d numbers = %d",n,sum);
	getch();
}