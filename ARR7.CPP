#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,arr[5];
	printf("Enter the element of array:\n");
	for(i=0;i<5;i++)
	{       printf("a[%d] = ",i);
		scanf("%d\n",&arr[i]);
	}
	printf("Print the element of array:");
	for(i=0;i<5;i++)
	{
		printf("a[%d] = %d\n",i,arr[i]);
	}
	getch();
}