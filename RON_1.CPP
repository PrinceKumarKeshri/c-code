#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long long int num,revNum=0;
clrscr();
printf("Number            = ");
scanf("%llu",&num);
while(num!=0)
{
revNum=(revNum*10)+(num%10);
num=num/10;
}
printf("Reverse of number = %llu",revNum);
getch();
}