#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,pow,num1=1;
clrscr();
printf("Number           = ");
scanf("%d",&num);
printf("Power            = ");
scanf("%d",&pow);
for(i=0;i<pow;i++)
{
if(i==0)
{
num1=1;
}
else
{
num1=num1*num;
}
printf("Square of number = %d\n",num1);
}
getch();
}