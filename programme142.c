



#include<stdio.h>
#include<string.h>

#define ROW 5
#define COLUM 10
main()
{
	char string[ROW][COLUM];
	int temp=0,element=0;

	element = sizeof(string)/sizeof(string[0]);

	for(temp=0;temp<element;temp++)
	{
		printf("enter string\n");
		scanf(" %[^\n]",string[temp]);
	}

	for(temp=0;temp<element;temp++)
	{
		printf("%s length is = %d\n",string[temp],strlen(string[temp]));
	}

}

