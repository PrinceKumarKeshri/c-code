#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,firstFabb,secFabb,limit,sum;
	printf("Enter the first number of fabbonacci series  = ");
	scanf("%d",&firstFabb);
	printf("Enter the second number of fabbonacci series = ");
	scanf("%d",&secFabb);
	printf("Enter the limit of fabbonacci series         = ");
	scanf("%d",&limit);
	printf("Fabbonacci Series : %d, %d,",firstFabb,secFabb);
	for(i=1;i<=limit-2;i++)
	{
		sum=firstFabb+secFabb;
		firstFabb=secFabb;
		secFabb=sum;
		printf(" %d,",sum);
	}
	printf(".....");
	getch();
}