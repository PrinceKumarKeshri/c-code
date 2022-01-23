#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	clrscr();
	int n,res;
	printf("Enter n value = ");
	scanf("%d",n);
	res=fact(n);
	printf("result = %d",res);
	getch();
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}