#include<stdio.h>
#include<conio.h>
void main()
{
float num;
unsigned long long int num1,rem,rem1,icr,newNum=0,newNum1=0, newNum2,sqrOfNum=1;
clrscr();
printf("Number     = ");
scanf("%f",&num);
num1=num*1000;
printf("Integer    = %llu\n",num1);
while(num1!=0)
 {
 rem=(num1%10000)-(num1%1000);
 rem1=num1%10;
 sqrOfNum=sqrOfNum*10;
 newNum=rem*sqrOfNum+newNum;
 newNum1=rem1*sqrOfNum+newNum1;
 num1=num1/10;
 }
newNum2=newNum1%10000;
printf("New Number = %llu\nNew number 1 = %llu",newNum,newNum2);
getch();
}