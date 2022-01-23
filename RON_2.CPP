#include<stdio.h>
#include<conio.h>
void main()
{
int num,revNum=0;
clrscr();
printf("Number            = ");
scanf("%d",&num);
while(num!=0)
{
revNum=(revNum*10)+(num%10);
num=num/10;
}
printf("Reverse of number = %d",revNum);
getch();
}