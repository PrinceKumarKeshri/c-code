#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,i,rev=0,temp;
	printf("Enter number = ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rev=rev*10+(num%10);
		num=num/10;
	}
	num=temp;
	printf("Reverse number = %d",rev);
	if(rev==num)
	{
		printf("\n%d is a palindrome number",num);

	}
	else
	{
		printf("\n%d is not a palindrome number",num);
	}
	getch();
}