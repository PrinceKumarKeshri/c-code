#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long long int num,sum=0;
clrscr();
printf("Number         = ");
scanf("%llu",&num);
while(num!=0)
{
sum=sum+((num%100)-(num%10));
num=num/100;
}
sum=sum/10;
printf("Sum of number = %llu",sum);
getch();
}