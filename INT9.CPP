#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2;
  char ch;
  clrscr();
  printf("number=");
  scanf("%d%d",&num1,&num2);
  while(1)
  {
  ch=fgetc(stdin);
   if(ch=='\n')
     break;
  }
  printf("%d\n",num1);
  printf("%d\n",num2);
  getch();
}