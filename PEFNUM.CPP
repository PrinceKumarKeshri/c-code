#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,sum=0;
	printf("Enter n value = ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{       if(n%i==0)
		{
			sum=sum+i;
		}
	}
	printf("Sum of factors of %d numbers = %d",n,sum);
	if(n==sum)
		printf("\n%d is a perfect number",n);
	else
		printf("\n%d is not a perfect number",n);
	getch();
}