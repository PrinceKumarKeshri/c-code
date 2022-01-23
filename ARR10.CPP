#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,sum=0,arr[5];
	printf("Enter the element of array :\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum of element of array = %d",sum);
	getch();
}