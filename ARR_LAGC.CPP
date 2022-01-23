#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5],i,large,temp;
	printf("Enter the element of array : ");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<=5;i++)
	{

		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("lagest element of array is = %d",large);
	getch();

}