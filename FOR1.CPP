#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,sum;  //sum is a local variable so if we don't initialize sum is equals to zero then sum will store some garbage value
	printf("Enter n value = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+n;  //and value will added iletrally to that garbage value
	}
	printf("Sum of first %d numbers = %d",n,sum); // and final output of sum is equal to garbage value
	getch();
}