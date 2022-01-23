#include<stdio.h>
#include<conio.h>
void main()
{
	//using one decrement and one increment operator
	clrscr();
	int i,j,k,l,m,n,a=1,p=5;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=a;j++)
		{
			printf("Ritika ");
			printf("%d ",i);
			printf("%d ",j);
		}
		printf("\n");
		a=a+1;
	}





	printf("\n");
	for(k=5;k>=1;k--)
	{
		for(l=k;l<=5;l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}





	printf("\n");
	for(m=5;m>=1;m--)
	{
		for(n=m;n<=5;n++)
		{
			printf("%d",m);
		}
		printf("\n");
	}
	getch();
}