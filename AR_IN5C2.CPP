#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr1[50],arr2[50],n1,n2,i,loc,l,t;
	printf("Enter the length of the 1st array = ");
	scanf("%d",&n1);
	printf("Enter the element of 1st array : \n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the length of 2nd array = ");
	scanf("%d",&n2);
	printf("Enter the element of 2nd array : \n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("Enter the location you want to isert the 2nd array = ");
	scanf("%d",&loc);
	l=n1+n2;
	t=n1-loc;
	for(i=loc;i<=t;i--)     //we can also write for(i=n1;i>loc;i--)
	{
		arr1[i+n2]=arr1[i];   //then we will also modify the for block operation is arr1[(i-1)+n2]=arr1[i-1]

		printf("a[%d] = %d\n",i+n2,arr1[i+n2]);
	}
	for(i=0;i<n2;i++)
	{
		arr1[loc+i]=arr2[i];
	}
	printf("After inserting element of 2nd array into the 1st array: \n");
	for(i=0;i<l;i++)
	{
		printf("a[%d] = %d\n",i,arr1[i]);
	}
	getch();
}