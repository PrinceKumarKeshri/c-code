#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("a[%d] = %d\n",i,arr[i]);
		printf("adress of a[%d] = %u\n\n",i,&arr[i]);
	}
	getch();
}