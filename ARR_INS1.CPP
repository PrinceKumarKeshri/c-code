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
	printf("shifting element from their respective pos :\n");
	for(i=n;i>=loc;i--)
	{
		arr[i]=arr[i-1];
		printf("%d\n",arr[i]);
	}
	printf("After shifting array of element :\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
	arr[loc]=insert;
	printf("Inserting element into array on thier pos you want :\n");
	for(i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
	getch();
}