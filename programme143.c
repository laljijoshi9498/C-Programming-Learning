



#include<stdio.h>
#include<string.h>

#define ROW 5
#define COLUM 10
main()
{
	char string[ROW][COLUM],ptr[COLUM];
	int temp1=0,element=0,temp2=0;

	element = sizeof(string)/sizeof(string[0]);

	for(temp1=0;temp1<element;temp1++)
	{
		printf("enter string\n");
		scanf(" %[^\n]",string[temp1]);
	}

	for(temp1=0,temp2=element-1;temp1<temp2;temp1++,temp2--)
	{
		strcpy(ptr,string[temp1]);
		strcpy(string[temp1],string[temp2]);
		strcpy(string[temp2],ptr);
		/*
		ptr = string[temp1];
		string[temp1] = string[temp2];
		string[temp2] = ptr;		
		*/
	}

	for(temp1=0;temp1<element;temp1++)
	{
		printf("string is %s\n",string[temp1]);
	}
}

