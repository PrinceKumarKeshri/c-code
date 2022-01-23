#include<stdio.h>
#include<conio.h>
void main()
{
int days,month,yr;
clrscr();
printf("Number of days   = ");
scanf("%llu",&days);
yr=days/365;
days=days%365;
month=days/30;
days=days%30;
printf("Number of years  = %d\nNumber of months = %d\nNumber of days   = %d",yr,month,days);
getch();
}