#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,temp,flag;
	char ch;
	clrscr();
	printf("\n\tnumber = ");
	scanf("%d%d",&num1,&num2);
	while(1)
	{
		ch=fgetc(stdin);
		if(ch=='\n')
		{
			if(flag==0)
			{
				printf("field is empty");
				continue;
			}
			break;
		}
		else
		{
			if(ch<57&&ch>48)
			{
				flag=1;
				temp=temp*10+(ch-48);
			}
			else
			{
				temp=0;
				flag=0;
				while(ch!='\n');
				printf("char not called");
				printf("re-enter no.");
			 }
		}
	}
	printf("%d",num1);
	printf("%d",num2);
	getch();
}