#include<stdio.h>
#include<conio.h>
void  main()
{
	clrscr();
	int i,count=0;
	while(i<10,i++)
	{
		printf("prince -> count = %u, i = %u\n",count,i)   ;
		count++;
	}
	printf("\ntotal number of times hello print = %d\n",count);
       //basic things about  format specifier uses of format specifier

	printf("\ntotal number of times hello print = %u\n",count);
	// if we use %d  format spercifier then it we not the exact number of count
	//because  it is a signed integer  but we uses the %u format specifier for int
	//so we also %u use for count
	getch();
}