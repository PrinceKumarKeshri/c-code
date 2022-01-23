#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int n,* arr,i=0;
	printf("Enter the length of array = ");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
	{
		printf("Out of memory");

	}
	else
	{
		printf("Array of element :\n");
		for(i=0;i<n;i++)
		{
			printf("a[%d] = ",i+1);
			scanf("%d",&arr[i]);
		}
		printf("\n");
	}
	arr=(int*)realloc(arr,sizeof(int));
	printf("Insert element = ");
	scanf("%d",&arr[n]);
	for(i=0;i<n+1;i++)
	{
		printf("a[%d] = %d\n",i+1,arr[i]);
	}
	printf("\n");
	printf("press any key for exit...");
	getch();
}