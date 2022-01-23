#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	short int i=1;  //-32768 to -32767
	while(++i)
	{
		printf("i = %d\n",i);
		++i;//++i
	}
}