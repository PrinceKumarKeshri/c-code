#include<stdio.h>
#include<conio.h>
void main()
{
float num;
unsigned long long int a,num1,rem,rem1,icr,newNum=0,newNum1=0, newNum2,sqrOfNum=1;
clrscr();
printf("Decimal Number                       = ");
scanf("%f",&num);
printf("Total place value of fractional part = ");
scanf("%llu",&a);
num1=num*a;
printf("Convert decimal to integer           = %f x %llu = %llu\n",num,a,num1);
while(num1!=0)
 {
 rem=(num1%(a*10))-(num1%(a));
 rem1=num1%10;
 sqrOfNum=sqrOfNum*10;
 newNum=rem*sqrOfNum+newNum;
 newNum1=rem1*sqrOfNum+newNum1;
 num1=num1/10;
 }
newNum=newNum/(a*10);
newNum1=(newNum1%(a*10))/10;
printf("Integer    part                      = %llu\nFractional part                      = %llu",newNum,newNum1);
getch();
}