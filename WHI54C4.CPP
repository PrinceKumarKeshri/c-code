#include<stdio.h>
#include<conio.h>
void  main()
{
	clrscr();
	int i,count=0;
	// to know about the problem why it will goes so many times then we will comment the while and print the initialize value of i
	printf("i=%d\n",i);
       //	while(i<10,i++)
	{
		printf("prince -> count = %u, i = %u \n",count,i)   ;
		count++;
	}
	printf("\ntotal number of times hello print = %u\n",count);
	getch();
}       // so the problem is that i store the garbage value thus it will read the element till the garbaze value is not equal to zero
