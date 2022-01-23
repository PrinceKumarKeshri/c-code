#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
unsigned char ch;
for(ch=0;ch<=127;ch++)
printf("\n%d%c\n",ch,ch);
getch();
}