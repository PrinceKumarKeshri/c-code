#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,i,sum=0,temp,r;
	printf("Enter number = ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	num=temp;
	if(sum==num)
	{
		printf("%d is an armstrong number",num);
	}
	else
	{
		printf("%d is not an armstrong number",num);
	}
	getch();
}