#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,arr[50],j=0,n,t,insert,loc;
	printf("Enter the length of array = ");
	scanf("%d",&n);
	printf("Enter the element of array : ");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to insert = ");
	scanf("%d",&insert);
	printf("Enter the location you want to insert element = ");
	scanf("%d",&loc);
	printf("shifting element from their respective pos :\n");
	t=n-loc;
	for(i=loc;i<=t;i++)
	{
		arr[n+j]=arr[i];
		printf("a[%d]=%d\n",n+j,arr[n+j]);
		j++;
	}
	printf("After shifting array of element :\n");
	for(i=0;i<n+t;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	arr[loc]=insert;
	printf("Inserting element into array on thier pos you want :\n");
	for(i=0;i<n+t;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	getch();
}