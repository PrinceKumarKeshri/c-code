#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,temp,reverse=0;
num=32341;
temp=num;
printf("number= %d\n",temp);
while(temp!=0)
{
reverse=(reverse*10)+(temp%10);
temp=temp/10;
}
printf("reverse number= %d\n",reverse);
getch();
}