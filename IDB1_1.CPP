#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long long int num,rem,icr,newNum=0,sqrOfNum=1;
clrscr();
printf("Number     = ");
scanf("%llu",&num);
while(num!=0)
 {
 rem=num%10;
 if(rem!=9)
  {
  icr=rem+1;
  }
 else
  {
  icr=0;
  }
 sqrOfNum=sqrOfNum*10;
 newNum=icr*sqrOfNum+newNum;
 num=num/10;
 }
newNum=newNum/10;
printf("New Number = %llu",newNum);
getch();
}