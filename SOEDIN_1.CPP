#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long long int num,rem,sum=0;
clrscr();
printf("Number     = ");
scanf("%llu",&num);
while(num!=0)
 {
 rem=num%10;
 if(rem%2==0)
  {
  sum=rem+sum;
  }
 num=num/10;
 }
printf("New Number = %llu",sum);
getch();
}