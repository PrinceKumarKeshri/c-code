#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,arr[5]={10};
	printf("a[%d] = %d\n",i,arr);
	for(i=0;i<5;i++)
	{
		printf("a[%d] = %d\n",i,arr[i]);
	}
	printf("%d",arr[0]);
	getch();
}