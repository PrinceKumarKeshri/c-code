#include<stdio.h>
#include<conio.h>
void main()
{
	FILE* fp;
	fp=fopen("C:\Users\0526p\Desktop\content","r");
	if(fp==NULL)
	{
		printf("File not present\n");
	}
	else
	{
		printf("file open in read mode\n");
	}
}