#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i;
	long int sum=1;
	printf("Enter n value = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i; // if we multiply with i then it will multiply of first n numbers means factorial of a number
	}
	printf("Sum of first %d numbers = %ld",n,sum);
	getch();
}