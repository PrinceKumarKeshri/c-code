#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,arr[50],n,insert,loc;
	printf("Enter the length of array = ");
	scanf("%d",&n);
	printf("Enter the element of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to insert = ");
	scanf("%d",&insert);
	printf("Enter the location you want to insert element = ");
	scanf("%d",&loc);
	for(i=loc;i<n+1;i++)
	{
		arr[i+1]=arr[i];
	}
	arr[loc]=insert;
	for(i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
	getch();
}