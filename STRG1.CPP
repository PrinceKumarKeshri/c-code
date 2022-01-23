#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,i,sum=0,r,temp,fact=1;
	printf("Enter number = ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		r=num%10;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		printf("\nfactorial of %d = %d",r,fact);
		sum=sum+fact;
		printf("\nsum=%d\n\n",sum);
		num=num/10;
	}
	num=temp;
	printf("\nsum of factorial of all digit of %d = %d\n\n",num,sum);
	if(num==sum)
	{
		printf("%d is a strong number",num);
	}
	else
	{
		printf("%d is not a strong number",num);
	}
	getch();
}