#include<stdio.h>
#include<conio.h>
void main()
{
int sec,min,hr;
clrscr();
printf("Number of seconds = ");
scanf("%llu",&c);
hr=sec/3600;
sec=sec%3600;
min=sec/60;
sec=sec%60;
printf("Corresponding value in hour, minute, and seconds = %d hour %d min %d sec",hr,min,sec);
getch();
}