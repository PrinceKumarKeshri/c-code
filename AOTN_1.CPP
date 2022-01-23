#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,sum=0,pow=1,sum1=0;
clrscr();
printf("Enter first number  = ");
scanf("%d",&num1);
printf("Enter second number = ");
scanf("%d",&num2);
while(num1!=0)
 {
 sum=(num1%10)+(num2%10)+sum;
 pow=pow*10;
 sum1=(sum%10)*pow+sum1;
 num1=num1/10;
 num2=num2/10;
 sum=sum/10;
 }
sum1=sum1/10;
printf("Sum of numbers      = %d",sum1);
getch();
}